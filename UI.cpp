#include "UI.h"

void DrawTextCenter(const char* text, float fontSize, Color textColor)
{
    Vector2 textPosition = MeasureTextEx(GetFontDefault(), text, fontSize, 1);
    DrawText(text, (GetScreenWidth()/2) - (textPosition.x/2),(GetScreenHeight()/2) - (textPosition.y/2), fontSize, textColor);
}

void DrawTextXCenter(const char* text, int posY, float fontSize, Color textColor){
    Vector2 textPosition = MeasureTextEx(GetFontDefault(), text, fontSize, 1);
    DrawText(text, (GetScreenWidth()/2) - (textPosition.x/2),posY, fontSize, textColor);
}

void DrawButton(int posX, int posY, int w, int h, int boderSize, Color bColor, Color lColor)
{
    DrawRectangle(posX, posY, w, h, bColor);
    DrawRectangle(posX+boderSize, posY+boderSize, w-boderSize*2, h-boderSize*2, lColor);
}

void DrawButtonWithText(int posX, int posY, int w, int h, int boderSize, Color bColor, Color lColor,const char* text, float fontSize, Color textColor){
    DrawRectangle(posX-boderSize, posY-boderSize, w+boderSize*2, h+boderSize*2, lColor);
    DrawRectangle(posX, posY, w, h, bColor);
    Vector2 textDimension = MeasureTextEx(GetFontDefault(), text, fontSize, 1);
    DrawText(text, (posX + (w - textDimension.x)/2),(posY + (h-textDimension.y)/2), fontSize,  textColor);
}

void DrawButtonWithText(Rectangle rec, Color bColor, Color lColor,const char* text, float fontSize, Color textColor){
    // DrawRectangle(rec.x-boderSize, rec.y-boderSize, rec.width+boderSize*2, rec.height+boderSize*2, lColor);
    DrawRectangleRec(rec, bColor);
    DrawRectangleLines(rec.x, rec.y, rec.width, rec.height, lColor);
    Vector2 textDimension = MeasureTextEx(GetFontDefault(), text, fontSize, 1);
    DrawText(text, (rec.x + (rec.width - textDimension.x)/2),(rec.y + (rec.height-textDimension.y)/2), fontSize,  textColor);
}

void DrawInputBox(Rectangle rec, const char* boxTitle, string& savedText, int MaxChars, InputBox& inputBox) {
    Vector2 textSize = MeasureTextEx(GetFontDefault(), boxTitle, 20, 1);
    Vector2 numberSize = MeasureTextEx(GetFontDefault(), TextFormat("%d/%d", MaxChars - inputBox.textLength, MaxChars), 20, 1);

    // Check if mouse is over the box
    bool mouseOver = CheckCollisionPointRec(GetMousePosition(), rec);

    // Activate the box if clicked
    if (mouseOver && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
        inputBox.isActive = true;
    } else if (!mouseOver && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
        inputBox.isActive = false;
    }

    // Draw the box
    DrawRectangle(rec.x, rec.y, rec.width, rec.height, LIGHTGRAY);
    DrawRectangleLines(rec.x, rec.y, rec.width, rec.height, inputBox.isActive ? RED : BLACK);
    DrawText(boxTitle, rec.x, rec.y - textSize.y, 20, BLACK);
    if (inputBox.textLength < MaxChars) {
        DrawText(TextFormat("%d/%d", MaxChars - inputBox.textLength, MaxChars), (rec.x + rec.width) - numberSize.x, rec.y - textSize.y, 20, BLACK);
    } else {
        DrawText(TextFormat("%d/%d", MaxChars - inputBox.textLength, MaxChars), (rec.x + rec.width) - numberSize.x, rec.y - textSize.y, 20, RED);
    }

    // Handle input only if active
    if (inputBox.isActive) {
        // Input handling logic
        if (IsKeyPressed(KEY_BACKSPACE) && inputBox.textLength > 0) {
            inputBox.inputText[--inputBox.textLength] = '\0';
        } else if (IsKeyPressed(KEY_ENTER)) {
            inputBox.isActive = false;
            savedText = inputBox.inputText;
        } else {
            int key = GetCharPressed();
            if (key != 0 && inputBox.textLength < MaxChars) {
                inputBox.inputText[inputBox.textLength++] = (char)key;
                inputBox.inputText[inputBox.textLength] = '\0';
            }
        }
    } else if (!inputBox.isActive && inputBox.textLength != 0) {
        savedText = inputBox.inputText;
    } else {
        savedText = "";
    }

    // Draw the input text
    DrawText(inputBox.inputText, rec.x + 5, rec.y + 5, 20, BLACK);
}

void DrawIntInputBox(Rectangle rec,const char* boxTitle, int& savedNumb, int MaxChars, InputBox& inputBox) {
    Vector2 textSize = MeasureTextEx(GetFontDefault(), boxTitle, 20, 1);
    Vector2 numberSize = MeasureTextEx(GetFontDefault(), TextFormat("%d/%d", MaxChars - inputBox.textLength, MaxChars), 20, 1);;
    // Check if mouse is over the box
    bool mouseOver = CheckCollisionPointRec(GetMousePosition(), rec);

    // Activate the box if clicked
    if (mouseOver && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
        inputBox.isActive = true;
    }
    else if(!mouseOver && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
        inputBox.isActive = false;
    }
    // Draw the box
    DrawRectangle(rec.x, rec.y, rec.width, rec.height, LIGHTGRAY);
    DrawRectangleLines(rec.x, rec.y, rec.width, rec.height, inputBox.isActive ? RED : BLACK);
    DrawText(boxTitle,rec.x,rec.y-textSize.y, 20, BLACK);
    if(inputBox.textLength < MaxChars){
        DrawText(TextFormat("%d/%d", MaxChars - inputBox.textLength, MaxChars),(rec.x+rec.width)-numberSize.x,rec.y-textSize.y, 20, BLACK);
    }
    else
    {
        DrawText(TextFormat("%d/%d", MaxChars - inputBox.textLength, MaxChars),(rec.x+rec.width)-numberSize.x,rec.y-textSize.y, 20, RED);
    }
    
    // Handle input only if active
    if (inputBox.isActive) {
        // Input handling logic
        if (IsKeyPressed(KEY_BACKSPACE) && inputBox.textLength > 0) {
            inputBox.inputText[--inputBox.textLength] = '\0';
        } else if (IsKeyPressed(KEY_ENTER)) {
            inputBox.isActive = false;
        } 
        else {
            int key = GetCharPressed();
            if (key != 0 && inputBox.textLength < MaxChars && isdigit(key)) {
                inputBox.inputText[inputBox.textLength++] = (char)key;
                inputBox.inputText[inputBox.textLength] = '\0';
            }
        }
    }
    else if(!inputBox.isActive && inputBox.textLength != 0){
        savedNumb = stoi(inputBox.inputText);
    }
    else{
        savedNumb = 0;
    }

    // Draw the input text
    DrawText(inputBox.inputText, rec.x + 5, rec.y + 5, 20, BLACK);
}

void DrawFloatInputBox(Rectangle rec,const char* boxTitle, float& savedValue, InputFloatBox& inputBox) {
    Vector2 textSize = MeasureTextEx(GetFontDefault(), boxTitle, 20, 1);

    // Check if mouse is over the box
    bool mouseOver = CheckCollisionPointRec(GetMousePosition(), rec);

    // Activate the box if clicked
    if (mouseOver && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
        inputBox.isActive = true;
    } else if (!mouseOver && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
        inputBox.isActive = false;
    }

    // Draw the box
    DrawRectangle(rec.x, rec.y, rec.width, rec.height, LIGHTGRAY);
    DrawRectangleLines(rec.x, rec.y, rec.width, rec.height, inputBox.isActive ? RED : BLACK);
    DrawText(boxTitle, rec.x, rec.y - textSize.y, 20, BLACK);

    // Handle input only if active
    if (inputBox.isActive) {
        // Input handling logic
        if (IsKeyPressed(KEY_BACKSPACE) && inputBox.textLength > 0) {
            if (inputBox.inputText[inputBox.textLength - 1] == '.') {
                inputBox.hasDecimalPoint = false;
            }
            inputBox.inputText[--inputBox.textLength] = '\0';
        } else if (IsKeyPressed(KEY_ENTER)) {
            inputBox.isActive = false;
        } else {
            int key = GetCharPressed();
            if (key != 0 && inputBox.textLength < MAX_CHARS) {
                if (isdigit(key)) {
                    inputBox.inputText[inputBox.textLength++] = (char)key;
                    inputBox.inputText[inputBox.textLength] = '\0';
                } else if (key == '.' && !inputBox.hasDecimalPoint) {
                    inputBox.inputText[inputBox.textLength++] = '.';
                    inputBox.inputText[inputBox.textLength] = '\0';
                    inputBox.hasDecimalPoint = true;
                }
            }
        }
    } else if (!inputBox.isActive && inputBox.textLength != 0) {
        if (is_number_or_decimal(inputBox.inputText)) {
            savedValue = atof(inputBox.inputText);
        }
    } else {
        savedValue = 0.0f;
    }

    // Draw the input text
    DrawText(inputBox.inputText, rec.x + 5, rec.y + 5, 20, BLACK);
}

bool is_number_or_decimal(const char* str) {
    if (str == nullptr || *str == '\0') {
        return false;
    }

    bool hasDecimalPoint = false;

    // Check for optional negative sign
    if (*str == '-') {
        str++;
    }

    // Check for digits and decimal point
    while (*str != '\0') {
        if (isdigit(*str)) {
            return true;
        } 
        else if (*str == '.' && !hasDecimalPoint) {
            hasDecimalPoint = true;
        } 
        else {
            return false; // Invalid character
        }
        str++;
    }

    return true;
}
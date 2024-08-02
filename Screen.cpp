#include "Screen.h"

// Rectangle = {x, y, w, h}

void HomeScreen(int& screen){
        Rectangle config = {251, 87,298, 61};
        Rectangle sale = {251, 158, 298, 61};
        Rectangle report = {251, 229, 298, 61};
        Rectangle reset = {251, 300, 298, 61};
        Rectangle quit = {251, 371, 298, 61};
        Vector2 mousePosition = GetMousePosition();
        DrawTextXCenter("Welcome",50, H2, BLACK);

        DrawButtonWithText(config, WHITE, BLACK, "Config Mode", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, config)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = Config;
            }
        }
        DrawButtonWithText(sale, WHITE, BLACK, "Sale Mode", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, sale)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = Sale;
            }
        }
        DrawButtonWithText(report, WHITE, BLACK, "Report Mode", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, report)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = Report;
            }
        }
        DrawButtonWithText(reset, RED, BLACK, "Reset All", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, reset)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = Reset;
            }
        }
        DrawButtonWithText(quit, WHITE, BLACK, "Save & Quit", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, quit)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = Quit;
            }
        }
}

void ConfigScreen(int& screen){
        Rectangle add = {95, 109, 298, 61};
        Rectangle remove = {95, 195, 298, 61};
        Rectangle edit = {95, 281, 298, 61};

        Rectangle search = {408, 109, 298, 61};
        Rectangle print = {408, 195, 298, 61};
        Rectangle deleteAll = {408, 281, 298, 61};

        Rectangle quit = {251, 367, 298, 61};
        Vector2 mousePosition = GetMousePosition();
        ClearBackground(RAYWHITE);

        DrawTextXCenter("Config Mode",50, H2, BLACK);
        
        DrawButtonWithText(add, WHITE, BLACK, "Add Item", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, add)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){

            }
        }
        DrawButtonWithText(remove, WHITE, BLACK, "Remove Item", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, remove)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            
            }
        }
        DrawButtonWithText(edit, WHITE, BLACK, "Edit Item", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, edit)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            
            }
        }
        DrawButtonWithText(search, WHITE, BLACK, "Search Item", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, search)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            
            }
        }
        DrawButtonWithText(print, WHITE, BLACK, "Print all Items", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, print)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            
            }
        }
        DrawButtonWithText(deleteAll, RED, BLACK, "Delete all Items", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, deleteAll)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                
            }
        }
        DrawButtonWithText(quit, WHITE, BLACK, "Return", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, quit)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = Home;
            }
        }
}

void SaleScreen(int& screen){
        Rectangle add = {95, 109, 298, 61};
        Rectangle remove = {95, 195, 298, 61};

        Rectangle search = {408, 109, 298, 61};
        Rectangle print = {408, 195, 298, 61};
        Rectangle deleteAll = {251, 281, 298, 61};

        Rectangle quit = {251, 367, 298, 61};
        Vector2 mousePosition = GetMousePosition();
        ClearBackground(RAYWHITE);

        DrawTextXCenter("Sale Mode",50, H2, BLACK);
        
        DrawButtonWithText(add, WHITE, BLACK, "Add Sale", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, add)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){

            }
        }
        DrawButtonWithText(remove, WHITE, BLACK, "Remove Sale", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, remove)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            
            }
        }
        DrawButtonWithText(search, WHITE, BLACK, "Search Sale", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, search)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            
            }
        }
        DrawButtonWithText(print, WHITE, BLACK, "Print all Sales", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, print)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            
            }
        }
        DrawButtonWithText(deleteAll, RED, BLACK, "Delete all Sales", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, deleteAll)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                
            }
        }
        DrawButtonWithText(quit, WHITE, BLACK, "Return", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, quit)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = Home;
            }
        }
}

void ReportScreen(int& screen){
        Rectangle eod = {251, 109, 298, 61};
        Rectangle ts = {251, 195, 298, 61};
        Rectangle es = {251, 281, 298, 61};

        Rectangle quit = {251, 367, 298, 61};
        Vector2 mousePosition = GetMousePosition();
        ClearBackground(RAYWHITE);

        DrawTextXCenter("Report Mode",50, H2, BLACK);
        
        DrawButtonWithText(eod, WHITE, BLACK, "End-of-day Summary", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, eod)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){

            }
        }
        DrawButtonWithText(ts, WHITE, BLACK, "Total Sales Today", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, ts)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            
            }
        }
        DrawButtonWithText(es, WHITE, BLACK, "Export Summary", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, es)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            
            }
        }
        DrawButtonWithText(quit, WHITE, BLACK, "Return", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, quit)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = Home;
            }
        }
}

void MainScreens(int& screen, bool& running){
    switch (screen)
        {
        case Home:
            HomeScreen(screen);
            break;
        case Config:
            ConfigScreen(screen);
            break;
        case Sale:
            SaleScreen(screen);
            break;
        case Report:
            ReportScreen(screen);
            break;
        case Quit:
            running = false;
            break;
        default:
            break;
        }
}

void CAdd(int &screen, string& name, string& id, float& price)
{
    Vector2 mouse = GetMousePosition();
    bool isSaved = false;
    bool isCancel = false;
    Rectangle saveButton = {408, 367, 298, 61};
    Rectangle cancelButton = {95, 367, 298, 61};

    Rectangle nameBox = {95, 109, 611, 61};
    Rectangle idBox = {95, 195, 611, 61};
    Rectangle priceBox = {95, 281, 611, 61};

    static InputBox itemNameInput;
    static InputBox itemIdInput;
    static InputFloatBox itemPriceInput;
    DrawTextXCenter("Config Mode -> Add Item",50, H2, BLACK);

    DrawInputBox(nameBox, "Item Name", name, 25, itemNameInput);
    DrawInputBox(idBox, "Item ID", id, 25, itemIdInput);
    DrawFloatInputBox(priceBox, "Price", price, itemPriceInput);

    DrawButtonWithText(cancelButton, WHITE, BLACK, "Cancel", H2, BLACK);
    DrawButtonWithText(saveButton, GREEN, BLACK, "Confirm", H2, BLACK);

    if(CheckCollisionPointRec(mouse, cancelButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            isCancel = true;
        }
    }
        if(CheckCollisionPointRec(mouse, saveButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            isSaved = true;
        }
    }

    if(isCancel || isSaved){
        itemNameInput.inputText[0] = {'\0'};
        itemNameInput.textLength = 0;
        itemNameInput.isActive = false;

        itemIdInput.inputText[0] = {'\0'};
        itemIdInput.textLength = 0;
        itemIdInput.isActive = false;

        itemPriceInput.inputText[0] = {'\0'};
        itemPriceInput.textLength = 0;
        itemPriceInput.isActive = false;
        itemPriceInput.hasDecimalPoint = false;
        if(isCancel){
            //cancel process
        }
        else if(isSaved){
            //save process
        }
    }
}


// void StartUpScreen(){
//    // Initialization
//     //--------------------------------------------------------------------------------------
//     const int screenWidth = 800;
//     const int screenHeight = 450;

//     int logoPositionX = screenWidth/2 - 128;
//     int logoPositionY = screenHeight/2 - 128;

//     int framesCounter = 0;
//     int lettersCount = 0;

//     int topSideRecWidth = 16;
//     int leftSideRecHeight = 16;

//     int bottomSideRecWidth = 16;
//     int rightSideRecHeight = 16;

//     int state = 0;                  // Tracking animation states (State Machine)
//     float alpha = 1.0f;             // Useful for fading

//     SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
//     //--------------------------------------------------------------------------------------

//     // Main game loop
//     while (state != 5)    // Detect window close button or ESC key
//     {
//         // Update
//         //----------------------------------------------------------------------------------
//         if (state == 0)                 // State 0: Small box blinking
//         {
//             framesCounter++;

//             if (framesCounter == 120)
//             {
//                 state = 1;
//                 framesCounter = 0;      // Reset counter... will be used later...
//             }
//         }
//         else if (state == 1)            // State 1: Top and left bars growing
//         {
//             topSideRecWidth += 4;
//             leftSideRecHeight += 4;

//             if (topSideRecWidth == 256) state = 2;
//         }
//         else if (state == 2)            // State 2: Bottom and right bars growing
//         {
//             bottomSideRecWidth += 4;
//             rightSideRecHeight += 4;

//             if (bottomSideRecWidth == 256) state = 3;
//         }
//         else if (state == 3)            // State 3: Letters appearing (one by one)
//         {
//             framesCounter++;

//             if (framesCounter/12)       // Every 12 frames, one more letter!
//             {
//                 lettersCount++;
//                 framesCounter = 0;
//             }

//             if(lettersCount == 12){
//                 framesCounter = 0;
//                 state = 4;
//             }
//         }
//         else if (state == 4)            // State 4: Reset and Replay
//         {
//             framesCounter++;
//             if(framesCounter > 120){
//             alpha -= 0.02f;

//             if (alpha <= -1.0f)
//             {
//                     alpha = 0.0f;
//                     state = 5;
//             }
//             }
//         }
//         //----------------------------------------------------------------------------------

//         // Draw
//         //----------------------------------------------------------------------------------
//         BeginDrawing();

//             ClearBackground(RAYWHITE);

//             if (state == 0)
//             {
//                 if ((framesCounter/15)%2) DrawRectangle(logoPositionX, logoPositionY, 16, 16, BLACK);
//             }
//             else if (state == 1)
//             {
//                 DrawRectangle(logoPositionX, logoPositionY, topSideRecWidth, 16, BLACK);
//                 DrawRectangle(logoPositionX, logoPositionY, 16, leftSideRecHeight, BLACK);
//             }
//             else if (state == 2)
//             {
//                 DrawRectangle(logoPositionX, logoPositionY, topSideRecWidth, 16, BLACK);
//                 DrawRectangle(logoPositionX, logoPositionY, 16, leftSideRecHeight, BLACK);

//                 DrawRectangle(logoPositionX + 240, logoPositionY, 16, rightSideRecHeight, BLACK);
//                 DrawRectangle(logoPositionX, logoPositionY + 240, bottomSideRecWidth, 16, BLACK);
//             }
//             else if (state == 3)
//             {
//                 DrawRectangle(logoPositionX, logoPositionY, topSideRecWidth, 16, Fade(BLACK, alpha));
//                 DrawRectangle(logoPositionX, logoPositionY + 16, 16, leftSideRecHeight - 32, Fade(BLACK, alpha));

//                 DrawRectangle(logoPositionX + 240, logoPositionY + 16, 16, rightSideRecHeight - 32, Fade(BLACK, alpha));
//                 DrawRectangle(logoPositionX, logoPositionY + 240, bottomSideRecWidth, 16, Fade(BLACK, alpha));

//                 DrawRectangle(GetScreenWidth()/2 - 112, GetScreenHeight()/2 - 112, 224, 224, Fade(RAYWHITE, alpha));

//                 Vector2 textPos = MeasureTextEx(GetFontDefault(), "Sale Stream", 30, 2);
//                 DrawText(TextSubtext("Sale Stream", 0, lettersCount), (GetScreenWidth()/2) - (textPos.x/2) - 2, ((GetScreenHeight()/2) - (textPos.y/2)), 30, Fade(BLACK, alpha));
//             }
//             else if (state == 4)
//             {
//                 DrawRectangle(logoPositionX, logoPositionY, topSideRecWidth, 16, Fade(BLACK, alpha));
//                 DrawRectangle(logoPositionX, logoPositionY + 16, 16, leftSideRecHeight - 32, Fade(BLACK, alpha));

//                 DrawRectangle(logoPositionX + 240, logoPositionY + 16, 16, rightSideRecHeight - 32, Fade(BLACK, alpha));
//                 DrawRectangle(logoPositionX, logoPositionY + 240, bottomSideRecWidth, 16, Fade(BLACK, alpha));

//                 DrawRectangle(GetScreenWidth()/2 - 112, GetScreenHeight()/2 - 112, 224, 224, Fade(RAYWHITE, alpha));

//                 Vector2 textPos = MeasureTextEx(GetFontDefault(), "Sale Stream", 30, 2);
//                 DrawText(TextSubtext("Sale Stream", 0, lettersCount), (GetScreenWidth()/2) - (textPos.x/2) - 2, ((GetScreenHeight()/2) - (textPos.y/2)), 30, Fade(BLACK, alpha));
//             }

//         EndDrawing();
//         //----------------------------------------------------------------------------------
//     }
// }

// void HomeScreen(){
//     while(true){
//         BeginDrawing();
//         ClearBackground(RAYWHITE);
//         DrawText("Welcome", 359, 50, 20, BLACK);
//         DrawButtonWithText(251,87,298, 61, 1, BLACK, WHITE, "Config Mode", 20, BLACK);

//         DrawButtonWithText(251,158,298, 61, 1, BLACK, WHITE, "Sale Mode", 20, BLACK);

//         DrawButtonWithText(251,229,298, 61, 1, BLACK, WHITE, "Report Mode", 20, BLACK);

//         DrawButtonWithText(251,300,298, 61, 1, BLACK, RED, "Reset", 20, BLACK);

//         DrawButtonWithText(251,371,298, 61, 1, BLACK, WHITE, "Save & Quit", 20, BLACK);
//         EndDrawing();
//     }
// }

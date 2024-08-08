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
                screen = C_Add;
            }
        }
        DrawButtonWithText(remove, WHITE, BLACK, "Remove Item", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, remove)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                screen = C_Delete;
            }
        }
        DrawButtonWithText(edit, WHITE, BLACK, "Edit Item", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, edit)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                screen = C_Edit;
            }
        }
        DrawButtonWithText(search, WHITE, BLACK, "Search Item", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, search)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                screen = C_Search;
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

void CAdd(int &screen, string& name, string& id, float& price)
{
    Vector2 mouse = GetMousePosition();
    bool isSaved = false;
    bool isCancelled = false;
    Rectangle saveButton = {408, 367, 298, 61};
    Rectangle cancelButton = {95, 367, 298, 61};

    Rectangle nameBox = {95, 109, 611, 61};
    Rectangle idBox = {95, 195, 611, 61};
    Rectangle priceBox = {95, 281, 611, 61};

    DrawTextXCenter("Config Mode -> Add Item",50, H2, BLACK);

    DrawInputBox(nameBox, "Item Name", name, 25, itemNameInput);
    DrawInputBox(idBox, "Item ID", id, MAX_ID, itemIdInput);
    DrawFloatInputBox(priceBox, "Price", price, itemPriceInput);

    DrawButtonWithText(cancelButton, WHITE, BLACK, "Cancel", H2, BLACK);

    if(CheckCollisionPointRec(mouse, cancelButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            isCancelled = true;
        }
    }
        if(CheckCollisionPointRec(mouse, saveButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            isSaved = true;
        }
    }

    if(isCancelled || isSaved){
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
        if(isCancelled){
            screen = Config;
        }
        else if(isSaved){
            timer = GetTime();
            screen = Config;
        }
    }
    if(timer>0 && GetTime() - timer < 2){
        DrawButtonWithText(saveButton, GREEN, BLACK, "Saved", H2, BLACK);
    }
    else{
        DrawButtonWithText(saveButton, GREEN, BLACK, "Confirm", H2, BLACK);
        timer = 0;
    }
}
void CRemove(int& screen, string& id)
{
    Vector2 mouse = GetMousePosition();
    Rectangle idBox = {95, 165, 611, 61};
    Rectangle cancelButton = {95, 251, 298, 61};
    Rectangle searchButton = {408, 251, 298, 61};
    bool isCancel = false;
    bool isSearch = false;

    DrawTextXCenter("Config Mode -> Remove Item", 50, H2, BLACK);
    DrawInputBox(idBox, "Item ID", id, MAX_ID, itemIdInput);
    DrawButtonWithText(cancelButton, WHITE, BLACK, "Cancel", H2, BLACK);
    DrawButtonWithText(searchButton, WHITE, BLACK, "Search", H2, BLACK);
    if(CheckCollisionPointRec(mouse, cancelButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            isCancel = true;
        }
    }
    if(CheckCollisionPointRec(mouse, searchButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            isSearch = true;
        }
    }
    if(isCancel || isSearch){
        itemIdInput.inputText[0] = {'\0'};
        itemIdInput.textLength = 0;
        itemIdInput.isActive = false;
        if(isCancel){
            screen = Config;
        }
        else if(isSearch){
            //Search screen
        }
    }
}

void CSearchDisplay(int& screen, string name, string id, float price)
{
    Vector2 mouse = GetMousePosition();

    Rectangle nameBox = {95, 109, 611, 61};
    Rectangle idBox = {95, 195, 611, 61};
    Rectangle priceBox = {95, 281, 611, 61};

    Rectangle searchButton = {408, 367, 298, 61};
    Rectangle cancelButton = {95, 367, 298, 61};
    bool isCancelled = false;
    bool isRemoved = false;

    DrawTextXCenter(TextFormat("Config Mode: Remove Item: %s", id.c_str()), 50, H2, BLACK);

    DrawDisplayBox(nameBox, WHITE, BLACK, TextFormat("%s", name.c_str()), H2, BLACK, "Name");
    DrawDisplayBox(idBox, WHITE, BLACK, TextFormat("%s", id.c_str()), H2, BLACK, "ID");
    DrawDisplayBox(priceBox, WHITE, BLACK, TextFormat("$%.3f", price), H2, BLACK, "Price");

    DrawButtonWithText(cancelButton, WHITE, BLACK, "Cancel", H2, BLACK);
    DrawButtonWithText(searchButton, RED, BLACK, "Remove", H2, BLACK);

    if(CheckCollisionPointRec(mouse, cancelButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            isCancelled = true;
        }
    }
    if(CheckCollisionPointRec(mouse, searchButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            isRemoved = true;
        }
    }
    if(isCancelled || isRemoved){
        itemIdInput.inputText[0] = {'\0'};
        itemIdInput.textLength = 0;
        itemIdInput.isActive = false;
        if(isCancelled){
            screen = Config;
        }
        else if(isCancelled){
            //Search screen
        }
    }
}
#include "Screen.h"

void HomeScreen(int& screen){
        Rectangle config = {251, 87,298, 61};
        Rectangle sale = {251, 158, 298, 61};
        Rectangle report = {251, 229, 298, 61};
        Rectangle reset = {251, 300, 298, 61};
        Rectangle quit = {251, 371, 298, 61};
        Vector2 mousePosition = GetMousePosition();
        DrawCurrentTime(5, 5, H2, BLACK);
        DrawTextXCenter("Welcome",50, H2, BLACK);

        DrawButtonWithText(config, WHITE, BLACK, "Config Mode", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, config)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = ConfigMain;
            }
        }
        DrawButtonWithText(sale, WHITE, BLACK, "Sale Mode", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, sale)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = SaleMain;
            }
        }
        DrawButtonWithText(report, WHITE, BLACK, "Report Mode", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, report)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = ReportMain;
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
                screen = C_Remove;
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
                screen = C_Print;
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

void CAdd(int &screen, Menu& menu)
{
    Vector2 mouse = GetMousePosition();
    Rectangle saveButton = {408, 367, 298, 61};
    Rectangle cancelButton = {95, 367, 298, 61};

    Rectangle nameBox = {95, 109, 611, 61};
    Rectangle idBox = {95, 195, 611, 61};
    Rectangle priceBox = {95, 281, 611, 61};

    DrawTextXCenter("Config Mode -> Add Item",50, H2, BLACK);

    DrawInputBox(nameBox, "Item Name", itemName, 25, itemNameInput);
    DrawInputBox(idBox, "Item ID", itemId, MAX_ID, itemIdInput);
    DrawFloatInputBox(priceBox, "Price", itemPrice, itemPriceInput);

    DrawButtonWithText(cancelButton, WHITE, BLACK, "Cancel", H2, BLACK);
    DrawButtonWithText(saveButton, GREEN, BLACK, "Add", H2, BLACK);

    if(CheckCollisionPointRec(mouse, cancelButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
            screen = ConfigMain;
        }
    }
        if(CheckCollisionPointRec(mouse, saveButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            string name = itemName;
            string id = itemId;
            float price = itemPrice;
            menu.AddItem(name, id, price);
            StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
            screen = ConfigMain;
        }
    }
}
void CRemove(int& screen, Menu& menu)
{
    Vector2 mouse = GetMousePosition();
    Rectangle idBox = {95, 165, 611, 61};
    Rectangle cancelButton = {95, 251, 298, 61};
    Rectangle searchButton = {408, 251, 298, 61};
    bool isSearch = false;
    DrawTextXCenter("Config Mode -> Remove Item", 50, H2, BLACK);
    DrawInputBox(idBox, "Item ID", itemId, MAX_ID, itemIdInput);
    DrawButtonWithText(cancelButton, WHITE, BLACK, "Cancel", H2, BLACK);
    DrawButtonWithText(searchButton, WHITE, BLACK, "Search", H2, BLACK);
    if(CheckCollisionPointRec(mouse, cancelButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
            screen = ConfigMain;
        }
    }
    if(CheckCollisionPointRec(mouse, searchButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            isSearch = true;
        }
    }
    if(isSearch){
        itemIdInput.inputText[0] = {'\0'};
        itemIdInput.textLength = 0;
        itemIdInput.isActive = false;
        Item* ptr;
        ptr = menu.SearchItem(itemId);
            if(ptr != nullptr){
                itemName = ptr->GetName();
                itemId = ptr->GetId();
                itemPrice = ptr->GetPrice();
                screen = C_Remove_Confirm;
            }
            else if(ptr == nullptr){
                StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
                screen = C_Not_Found;
            }
    }
}

void CRemoveConfirm(int& screen, Menu& menu)
{
    Vector2 mouse = GetMousePosition();

    Rectangle nameBox = {95, 109, 611, 61};
    Rectangle idBox = {95, 195, 611, 61};
    Rectangle priceBox = {95, 281, 611, 61};

    Rectangle removeButton = {408, 367, 298, 61};
    Rectangle cancelButton = {95, 367, 298, 61};

    DrawTextXCenter(TextFormat("Config Mode -> Remove Item: %s", itemId.c_str()), 50, H2, BLACK);

    DrawDisplayBox(nameBox, WHITE, BLACK, TextFormat("%s", itemName.c_str()), H2, BLACK, "Name");
    DrawDisplayBox(idBox, WHITE, BLACK, TextFormat("%s", itemId.c_str()), H2, BLACK, "ID");
    DrawDisplayBox(priceBox, WHITE, BLACK, TextFormat("$%.3f", itemPrice), H2, BLACK, "Price");

    DrawButtonWithText(cancelButton, WHITE, BLACK, "Cancel", H2, BLACK);
    DrawButtonWithText(removeButton, RED, BLACK, "Remove", H2, BLACK);

    if(CheckCollisionPointRec(mouse, cancelButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
            screen = ConfigMain;
        }
    }
    if(CheckCollisionPointRec(mouse, removeButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            string id = itemId;
            menu.RemoveItem(id);
            StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
            screen = ConfigMain;
        }
    }
}

void CSearch(int &screen, Menu menu)
{
    Vector2 mouse = GetMousePosition();
    Rectangle idBox = {95, 165, 611, 61};
    Rectangle cancelButton = {95, 251, 298, 61};
    Rectangle searchButton = {408, 251, 298, 61};
    bool isSearch = false;
    DrawTextXCenter("Config Mode -> Search Item", 50, H2, BLACK);
    DrawInputBox(idBox, "Item ID", itemId, MAX_ID, itemIdInput);
    DrawButtonWithText(cancelButton, WHITE, BLACK, "Cancel", H2, BLACK);
    DrawButtonWithText(searchButton, WHITE, BLACK, "Search", H2, BLACK);
    if(CheckCollisionPointRec(mouse, cancelButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
            screen = ConfigMain;
        }
    }
    if(CheckCollisionPointRec(mouse, searchButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            isSearch = true;
        }
    }
    if(isSearch){
        itemIdInput.inputText[0] = {'\0'};
        itemIdInput.textLength = 0;
        itemIdInput.isActive = false;
        Item* ptr;
        ptr = menu.SearchItem(itemId);
            if(ptr != nullptr){
                itemName = ptr->GetName();
                itemId = ptr->GetId();
                itemPrice = ptr->GetPrice();
                screen = C_Search_Result;
            }
            else if(ptr == nullptr){
                StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
                screen = C_Not_Found;
            }
    }
}

void CSearchResult(int& screen){
    Vector2 mouse = GetMousePosition();

    Rectangle nameBox = {95, 109, 611, 61};
    Rectangle idBox = {95, 195, 611, 61};
    Rectangle priceBox = {95, 281, 611, 61};

    Rectangle returnButton = {251, 367, 298, 61};

    DrawTextXCenter("Config Mode -> Item Found", 50, H2, BLACK);

    DrawDisplayBox(nameBox, WHITE, BLACK, TextFormat("%s", itemName.c_str()), H2, BLACK, "Name");
    DrawDisplayBox(idBox, WHITE, BLACK, TextFormat("%s", itemId.c_str()), H2, BLACK, "ID");
    DrawDisplayBox(priceBox, WHITE, BLACK, TextFormat("$%.3f", itemPrice), H2, BLACK, "Price");

    DrawButtonWithText(returnButton, WHITE, BLACK, "Return", H2, BLACK);

    if(CheckCollisionPointRec(mouse, returnButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
            screen = ConfigMain;
        }
    }
}

void CPrint(int &screen, Menu &menu)
{
    Vector2 mouse = GetMousePosition();

    Rectangle nameBox = {95, 109, 611, 61};
    Rectangle idBox = {95, 195, 611, 61};
    Rectangle priceBox = {95, 281, 611, 61};
    
    Rectangle preButton = {160, 367, 61, 61};
    Rectangle nextButton = {579, 367, 61, 61};

    Rectangle returnButton = {251, 367, 298, 61};

    int totalItem = 0;
    totalItem = menu.GetTotalOfItems();
    itemPtr = menu.item;
    for(int i =0; i<count; i++){
        itemPtr = itemPtr->next;
    }
    itemName = itemPtr->GetName();
    itemId = itemPtr->GetId();
    itemPrice = itemPtr->GetPrice();
    DrawTextXCenter(TextFormat("Config Mode -> Print all Items [%d/%d]",count+1, totalItem), 50, H2, BLACK);
    DrawDisplayBox(nameBox, WHITE, BLACK, TextFormat("%s", itemName.c_str()), H2, BLACK, "Name");
    DrawDisplayBox(idBox, WHITE, BLACK, TextFormat("%s", itemId.c_str()), H2, BLACK, "ID");
    DrawDisplayBox(priceBox, WHITE, BLACK, TextFormat("$%.3f", itemPrice), H2, BLACK, "Price");

    DrawButtonWithText(returnButton, WHITE, BLACK, "Return", H2, BLACK);
    DrawButtonWithText(nextButton, WHITE, BLACK, "->", H2, BLACK);
    DrawButtonWithText(preButton, WHITE, BLACK, "<-", H2, BLACK);

    if(CheckCollisionPointRec(mouse, nextButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && count+1 < totalItem){
            count++;
        }
    }
    if(CheckCollisionPointRec(mouse, preButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && count+1 > 1){
            count--;
        }
    }    

    if(CheckCollisionPointRec(mouse, returnButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
            count = 0;
            itemPtr = nullptr;
            screen = ConfigMain;
        }
    }
}

void CNotFount(int &screen)
{
    Rectangle returnButton = {251, 195, 298, 61};
    Vector2 mousePosition = GetMousePosition();
    DrawTextXCenter("Config Mode -> No Item", 50, H2, RED);
    DrawButtonWithText(returnButton, WHITE, BLACK, "Return", H2, BLACK);
    if(CheckCollisionPointRec(mousePosition, returnButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = ConfigMain;
        }
    }
}

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
        DrawButtonWithText(edit, WHITE, BLACK, "Modify Item", H2, BLACK);
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
                screen = C_Delete;
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
        Rectangle search = {408, 109, 298, 61};
        Rectangle print = {251, 195, 298, 61};
        Rectangle deleteAll = {251, 281, 298, 61};

        Rectangle quit = {251, 367, 298, 61};
        Vector2 mousePosition = GetMousePosition();
        ClearBackground(RAYWHITE);
        DrawCurrentTime(5, 5, H2, BLACK);                                                                                                                                     
        DrawTextXCenter("Sale Mode",50, H2, BLACK);
        
        DrawButtonWithText(add, WHITE, BLACK, "Add Sale", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, add)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                screen = S_Add;
            }
        }
        DrawButtonWithText(search, WHITE, BLACK, "Search Sale", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, search)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                screen = S_Search;
            }
        }
        DrawButtonWithText(print, WHITE, BLACK, "Print all Sales", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, print)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                screen = S_Print;
            }
        }
        DrawButtonWithText(deleteAll, RED, BLACK, "Delete all Sales", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, deleteAll)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                screen = S_Delete;
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
        Rectangle eod = {251, 119, 298, 61};
        Rectangle es = {251, 195, 298, 61};
        Rectangle config = {251, 271, 298, 61};

        Rectangle quit = {251, 367, 298, 61};
        Vector2 mousePosition = GetMousePosition();
        ClearBackground(RAYWHITE);

        DrawTextXCenter("Report Mode",50, H2, BLACK);
        
        DrawButtonWithText(eod, WHITE, BLACK, "End-of-day Summary", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, eod)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                screen = R_Eod;
            }
        }
        DrawButtonWithText(es, WHITE, BLACK, "Export Summary", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, es)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                screen = R_Export;
            }
        }
        DrawButtonWithText(config, WHITE, BLACK, "Tax Setting", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, config)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = R_Tax_Setting;
            }
        }

        DrawButtonWithText(quit, WHITE, BLACK, "Return", H2, BLACK);
        if(CheckCollisionPointRec(mousePosition, quit)){
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = Home;
            }
        }
}

void ResetAll(int &screen, Menu &menu)
{
    Vector2 mouse = GetMousePosition();
    Rectangle removeButton = {408, 367, 298, 61};
    Rectangle cancelButton = {95, 367, 298, 61};
    DrawTextXCenter("Delete all Items and Sales", 50, H2, RED);
    DrawTextXCenter("WARNING: All sales and items datas will be deleted can can't be recovered", 198, H2, RED);
    DrawTextXCenter("Please confirm", 225, H2, RED);

    DrawButtonWithText(removeButton, RED, BLACK, "Delete", H2, BLACK);
    DrawButtonWithText(cancelButton, WHITE, BLACK, "Cancel", H2, BLACK);

    if(CheckCollisionPointRec(mouse, removeButton)){
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)){
            menu.ClearMemory();
            screen = Home;
        }
    }

    if(CheckCollisionPointRec(mouse, cancelButton)){
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
            if(!menu.ItemIdVerification(id)){
                StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
                screen = C_Error;
            }
            else{
            menu.AddItem(name, id, price);
            StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
            screen = ConfigMain;
            }
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
            itemIdInput.Clear();
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
}

void CSearchResult(int& screen, Menu& menu){
    Vector2 mouse = GetMousePosition();

    Rectangle nameBox = {95, 109, 611, 61};
    Rectangle idBox = {95, 195, 611, 61};
    Rectangle priceBox = {95, 281, 611, 61};

    Rectangle returnButton = {308, 367, 184, 61};
    // Rectangle modifyButton = {95, 367, 184, 61};
    // Rectangle removeButton = {522, 367, 184, 61};

    DrawTextXCenter("Config Mode -> Item Found", 50, H2, BLACK);

    DrawDisplayBox(nameBox, WHITE, BLACK, TextFormat("%s", itemName.c_str()), H2, BLACK, "Name");
    DrawDisplayBox(idBox, WHITE, BLACK, TextFormat("%s", itemId.c_str()), H2, BLACK, "ID");
    DrawDisplayBox(priceBox, WHITE, BLACK, TextFormat("$%.3f", itemPrice), H2, BLACK, "Price");

    DrawButtonWithText(returnButton, WHITE, BLACK, "Return", H2, BLACK);
    // DrawButtonWithText(modifyButton, YELLOW, BLACK, "Modify", H2, BLACK);
    // DrawButtonWithText(removeButton, RED, BLACK, "Remove", H2, BLACK);

    if(CheckCollisionPointRec(mouse, returnButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
            screen = ConfigMain;
        }
    }
}

void CEdit(int &screen, Menu menu)
{
    Vector2 mouse = GetMousePosition();
    Rectangle idBox = {95, 165, 611, 61};
    Rectangle cancelButton = {95, 251, 298, 61};
    Rectangle searchButton = {408, 251, 298, 61};
    bool isSearch = false;
    DrawTextXCenter("Config Mode -> Modify Item", 50, H2, BLACK);
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
                screen = C_Edit_Result;
            }
            else if(ptr == nullptr){
                StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
                screen = C_Not_Found;
            }
    }
}

void CEditResult(int &screen, Menu menu)
{
    Vector2 mouse = GetMousePosition();

    Rectangle nameBox = {95, 109, 611, 61};
    Rectangle idBox = {95, 195, 611, 61};
    Rectangle priceBox = {95, 281, 611, 61};

    Rectangle modifyButton = {408, 367, 298, 61};
    Rectangle cancelButton = {95, 367, 298, 61};

    DrawTextXCenter(TextFormat("Config Mode -> Modify Item: %s", itemId.c_str()), 50, H2, BLACK);

    DrawDisplayBox(nameBox, WHITE, BLACK, TextFormat("%s", itemName.c_str()), H2, BLACK, "Name");
    DrawDisplayBox(idBox, WHITE, BLACK, TextFormat("%s", itemId.c_str()), H2, BLACK, "ID");
    DrawDisplayBox(priceBox, WHITE, BLACK, TextFormat("$%.3f", itemPrice), H2, BLACK, "Price");

    DrawButtonWithText(cancelButton, WHITE, BLACK, "Cancel", H2, BLACK);
    DrawButtonWithText(modifyButton, YELLOW, BLACK, "Modify", H2, BLACK);

    if(CheckCollisionPointRec(mouse, cancelButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
            screen = ConfigMain;
        }
    }
    if(CheckCollisionPointRec(mouse, modifyButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            itemId2 = itemId;
            StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
            screen = C_Modify;
        }
    }
}

void CModify(int &screen, Menu &menu)
{
    Vector2 mouse = GetMousePosition();

    Rectangle nameBox = {95, 109, 611, 61};
    Rectangle idBox = {95, 195, 611, 61};
    Rectangle priceBox = {95, 281, 611, 61};

    Rectangle confirmButton = {408, 367, 298, 61};
    Rectangle cancelButton = {95, 367, 298, 61};

    DrawTextXCenter(TextFormat("Config Mode -> Modify Item: %s",itemId2.c_str()),50, H2, BLACK);

    DrawInputBox(nameBox, "Item Name", itemName, 25, itemNameInput);
    DrawInputBox(idBox, "Item ID", itemId, MAX_ID, itemIdInput);
    DrawFloatInputBox(priceBox, "Price", itemPrice, itemPriceInput);

    DrawButtonWithText(cancelButton, WHITE, BLACK, "Cancel", H2, BLACK);
    DrawButtonWithText(confirmButton, YELLOW, BLACK, "Confirm", H2, BLACK);

    if(CheckCollisionPointRec(mouse, cancelButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
            screen = ConfigMain;
        }
    }
    if(CheckCollisionPointRec(mouse, confirmButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            string newName = itemName;
            string newId = itemId;
            float newPrice = itemPrice;
            menu.EditItem(itemId2, newName, newId, newPrice);
            StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
            itemId2 = "\0";
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
    totalItem = menu.GetNumberOfItem();

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

void CDelete(int &screen, Menu &menu)
{
    Vector2 mouse = GetMousePosition();
    Rectangle removeButton = {408, 367, 298, 61};
    Rectangle cancelButton = {95, 367, 298, 61};
    DrawTextXCenter("Config Mode -> Delete all Items", 50, H2, RED);
    DrawTextXCenter("WARNING: All item datas will be deleted can can't be recovered", 198, H2, RED);
    DrawTextXCenter("Please confirm", 225, H2, RED);

    DrawButtonWithText(removeButton, RED, BLACK, "Delete", H2, BLACK);
    DrawButtonWithText(cancelButton, WHITE, BLACK, "Cancel", H2, BLACK);

    if(CheckCollisionPointRec(mouse, removeButton)){
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)){
            menu.ClearItems();
            screen = ConfigMain;
        }
    }

    if(CheckCollisionPointRec(mouse, cancelButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
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

void CError(int &screen)
{
    Rectangle returnButton = {251, 195, 298, 61};
    Vector2 mousePosition = GetMousePosition();
    DrawTextXCenter("Config Mode -> Error", 50, H2, RED);
    DrawButtonWithText(returnButton, WHITE, BLACK, "Return", H2, BLACK);
    DrawTextXCenter("There are several reasons give you error", 256, H2, RED);
    DrawTextXCenter("Matching item ID, memory allocating,... ", 282, H2, RED);
    DrawTextXCenter("Please check again", 339, H2, RED);
    if(CheckCollisionPointRec(mousePosition, returnButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = ConfigMain;
        }
    }
}

void SAdd(int &screen, Menu menu)
{
    Vector2 mouse = GetMousePosition();

    Rectangle itemIdInputBox = {154, 117, 407, 61};
    Rectangle addItem = {154,188,166, 61};
    Rectangle quantityInputBox = {583, 117, 61, 61};
    Rectangle subTotal = {95, 291, 298, 61};
    Rectangle done = {408, 367, 298, 61};
    Rectangle cancel = {95, 367, 298, 61};
    Rectangle orderListBox = {480, 188, 166, 61};
    Rectangle itemList = {480,291,166,61};
    DrawTextXCenter("Sale Mode -> Add Sale", 50, H2, BLACK);
    DrawCurrentTime(5, 5, H2, BLACK);
    DrawInputBox(itemIdInputBox, "Item ID", itemId, 10, itemIdInput);
    DrawIntInputBox(quantityInputBox, "Quanity", quantity, 2, quantityInput);
    DrawButtonWithText(addItem, WHITE, BLACK, "Add Item", H2, BLACK);
    DrawButtonWithText(itemList, WHITE, BLACK, "Items List", H2, BLACK);
    DrawButtonWithText(orderListBox, WHITE, BLACK, "Orders List", H2, BLACK);

    DrawButtonWithText(done, WHITE, BLACK, "Done", H2, BLACK);
    DrawButtonWithText(cancel, WHITE, BLACK, "Cancel", H2, BLACK);
    if(CheckCollisionPointRec(mouse, addItem)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            Item* ptr = menu.SearchItem(itemId);
            if(ptr != nullptr){
            for(int i =0; i< quantity;i++){
                ordersList.push_back(itemId);
                subTotalPrice += menu.GetPriceOf(itemId);
            }
            quantityInput.Clear();
            quantity = 0;
            itemIdInput.Clear();
            itemId = '\0';
            }
        }
    }

    if(CheckCollisionPointRec(mouse, orderListBox)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && ordersList.size() > 0){
            prevPage = S_Add;
            screen = S_Order_List;
        }
    }
    if(CheckCollisionPointRec(mouse, cancel)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            StaticVarReset(itemIdInput, saleIdInput, quantityInput, itemId, saleId, ordersList, quantity, subTotalPrice, saleTime);
            screen = SaleMain;
        }
    }
    if(CheckCollisionPointRec(mouse, done)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            itemIdInput.Clear();
            quantityInput.Clear();
            saleId = GenerateId();
            screen = S_Add_Confirm;
        }
    }
    if(CheckCollisionPointRec(mouse, itemList)){
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
            prevPage = S_Add;
            screen = S_Items_List;
        }
    }
    DrawDisplayBox(subTotal, WHITE, BLACK, TextFormat("$%.3f", subTotalPrice), H2, BLACK, "Sub Total");
}

void SAddConfirm(int &screen, Menu &menu)
{
    Vector2 mouse = GetMousePosition();
    Rectangle preButton = {20, 195, 61, 61};
    Rectangle nextButton = {720, 195, 61, 61};

    Rectangle cancel ={95, 367, 298, 61};
    Rectangle confirm = {408,367, 298, 61};

    Rectangle nameBox = {125, 110, 537, 61};
    Rectangle priceBox = {125, 198, 217, 61};
    Rectangle totalBox = {357, 286, 217, 61};
    Rectangle taxBox = {357, 198, 217, 61};
    Rectangle subTotalBox = {125, 286, 217, 61};
    Rectangle numberofItemBox ={601, 286, 61, 61};

    DrawTextXCenter(TextFormat("Sale Mode -> Add Sale: %d", saleId), 50, H2, BLACK);
    DrawCurrentTime(5, 5, H2, BLACK);
    DrawButtonWithText(cancel, WHITE, BLACK, "Cancel", H2, BLACK);
    DrawButtonWithText(confirm, GREEN, BLACK, "Confirm", H2, BLACK);

    DrawButtonWithText(preButton, WHITE, BLACK, "<-", H2, BLACK);
    DrawButtonWithText(nextButton, WHITE, BLACK, "->", H2, BLACK);

    itemPtr = menu.SearchItem(ordersList[count]);
    vector<string> list = ordersList;
    int totalOrders = ordersList.size();

    DrawDisplayBox(nameBox, WHITE, BLACK, TextFormat("%s", itemPtr->GetName().c_str()), H2, BLACK, "Item Name");
    DrawDisplayBox(priceBox, WHITE, BLACK, TextFormat("$%.3f", itemPtr->GetPrice()), H2, BLACK, "Price");
    DrawDisplayBox(totalBox, WHITE, BLACK, TextFormat("$%.3f", menu.GetTotalPrice(list)+(menu.GetTotalPrice(list)*menu.GetTax()/100)), H2, BLACK, "Total");
    DrawDisplayBox(subTotalBox, WHITE, BLACK, TextFormat("$%.3f", menu.GetTotalPrice(list)), H2, BLACK, "Sub Total");
    DrawDisplayBox(taxBox, WHITE, BLACK, TextFormat("$%.3f", menu.GetTotalPrice(list)*menu.GetTax()/100), H2, BLACK, TextFormat("Tax %.2f%%", menu.GetTax()));

    DrawButtonWithText(numberofItemBox, WHITE, BLACK, TextFormat("%d/%d", count+1, ordersList.size()), H2, BLACK);

    if(CheckCollisionPointRec(mouse, nextButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && count+1 < totalOrders){
            count++;
        }
    }
    if(CheckCollisionPointRec(mouse, preButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && count+1 > 1){
            count--;
        }
    }

    if(CheckCollisionPointRec(mouse, cancel)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            StaticVarReset(itemIdInput, saleIdInput, quantityInput, itemId, saleId, ordersList, quantity, subTotalPrice, saleTime);
            count = 0;
            screen = SaleMain;
        }
    }
    if(CheckCollisionPointRec(mouse, confirm)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            menu.AddSale(ordersList, saleId);
            StaticVarReset(itemIdInput, saleIdInput, quantityInput, itemId, saleId, ordersList, quantity, subTotalPrice, saleTime);
            count = 0;
            itemPtr = nullptr;
            screen = SaleMain;
        }
    }
}

void SSearch(int &screen, Menu menu)
{
    Vector2 mouse = GetMousePosition();
    Rectangle idBox = {95, 165, 611, 61};
    Rectangle returnButton = {95, 251, 298, 61};
    Rectangle searchButton = {408, 251, 298, 61};
    DrawTextXCenter("Sale Mode -> Search Sale", 50, H2, BLACK);
    DrawIntInputBox(idBox, "Sale ID", saleId, MAX_CHARS, saleIdInput);
    DrawButtonWithText(returnButton, WHITE, BLACK, "Return", H2, BLACK);
    DrawButtonWithText(searchButton, WHITE, BLACK, "Search", H2, BLACK);

    if(CheckCollisionPointRec(mouse, returnButton)){
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
            StaticVarReset(itemIdInput, saleIdInput, quantityInput, itemId, saleId, ordersList, quantity, subTotalPrice, saleTime);
            screen = SaleMain;
        }
    }
    
    if(CheckCollisionPointRec(mouse, searchButton)){
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
            saleIdInput.Clear();
            Sale* ptr = menu.SearchSale(saleId);
            if(ptr != nullptr){
            saleId = ptr->GetId();
            saleTime = ptr->GetTime();
            ordersList = ptr->GetOrders();
            subTotalPrice = ptr->GetTotal();
            screen = S_Search_Result;
            }
            else{
            StaticVarReset(itemIdInput, saleIdInput, quantityInput, itemId, saleId, ordersList, quantity, subTotalPrice, saleTime);
            screen = S_Not_Found;
            }
        }
    }
}

void SSearchResult(int &screen, Menu &menu)
{
    Vector2 mouse = GetMousePosition();
    Rectangle idBox = {95, 109, 305, 61};
    Rectangle timeBox = {95,195,305,61};
    Rectangle totalBox = {95, 281, 305, 61};
    Rectangle subTotalBox = {492, 109, 214, 61};
    Rectangle taxBox = {429, 195, 214,61};
    Rectangle orderListButton = {492, 281, 214, 61};
    Rectangle returnButton = {95, 367, 298, 61};
    Rectangle removeButton = {408, 367, 298, 61};
    DrawTextXCenter("Sale Mode -> Search Sale", 50, H2, BLACK);
    DrawDisplayBox(idBox, WHITE, BLACK, TextFormat("%d", saleId), H2, BLACK, "Sale ID");
    DrawDisplayBox(timeBox, WHITE, BLACK, TextFormat("%s", saleTime.c_str()), H2, BLACK, "Sale Time");
    DrawDisplayBox(subTotalBox, WHITE, BLACK, TextFormat("$%.3f", subTotalPrice), H2, BLACK, "Sub Total");
    DrawDisplayBox(totalBox, WHITE, BLACK, TextFormat("$%.3f", subTotalPrice+(subTotalPrice*(menu.GetTax()/100))), H2, BLACK, "Total");
    DrawDisplayBox(taxBox, WHITE, BLACK, TextFormat("$%.3f", (subTotalPrice*(menu.GetTax()/100))), H2, BLACK, TextFormat("Tax %.2f%%", menu.GetTax()));
    DrawButtonWithText(orderListButton, WHITE, BLACK, "OrderList", H2, BLACK);
    DrawButtonWithText(returnButton, WHITE, BLACK, "Return", H2, BLACK);
    DrawButtonWithText(removeButton, RED, BLACK, "Remove", H2, BLACK);

    if(CheckCollisionPointRec(mouse, returnButton)){
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
            StaticVarReset(itemIdInput, saleIdInput, quantityInput, itemId, saleId, ordersList, quantity, subTotalPrice, saleTime);
            screen = SaleMain;
        }
    }
    if(CheckCollisionPointRec(mouse, removeButton)){
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
            menu.RemoveSale(saleId);
            StaticVarReset(itemIdInput, saleIdInput, quantityInput, itemId, saleId, ordersList, quantity, subTotalPrice, saleTime);
            screen = SaleMain;
        }
    }
    if(CheckCollisionPointRec(mouse, orderListButton)){
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
            prevPage = S_Search_Result;
            screen = S_Order_List;
        }
    }
}

void SOrderList(int& screen, Menu menu)
{
    static int orderCount = 0;
    Vector2 mouse = GetMousePosition();

    Rectangle nameBox = {95, 109, 611, 61};
    Rectangle idBox = {95, 195, 611, 61};
    Rectangle priceBox = {95, 281, 611, 61};
    
    Rectangle preButton = {160, 367, 61, 61};
    Rectangle nextButton = {579, 367, 61, 61};

    Rectangle returnButton = {251, 367, 298, 61};

    int totalItem = 0;
    totalItem = ordersList.size();

    itemPtr = menu.SearchItem(ordersList[orderCount]);
    itemName = itemPtr->GetName();
    itemId = itemPtr->GetId();
    itemPrice = itemPtr->GetPrice();
    DrawTextXCenter(saleId == 0 ? TextFormat("Sale Mode -> Orders List [%d/%d]",orderCount+1, totalItem) : TextFormat("Sale Mode -> %d Orders List [%d/%d]", saleId,orderCount+1, totalItem), 50, H2, BLACK);
    DrawDisplayBox(nameBox, WHITE, BLACK, TextFormat("%s", itemName.c_str()), H2, BLACK, "Name");
    DrawDisplayBox(idBox, WHITE, BLACK, TextFormat("%s", itemId.c_str()), H2, BLACK, "ID");
    DrawDisplayBox(priceBox, WHITE, BLACK, TextFormat("$%.3f", itemPrice), H2, BLACK, "Price");

    DrawButtonWithText(returnButton, WHITE, BLACK, "Return", H2, BLACK);
    DrawButtonWithText(nextButton, WHITE, BLACK, "->", H2, BLACK);
    DrawButtonWithText(preButton, WHITE, BLACK, "<-", H2, BLACK);

    if(CheckCollisionPointRec(mouse, nextButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && orderCount+1 < totalItem){
            orderCount++;
        }
    }
    if(CheckCollisionPointRec(mouse, preButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && orderCount+1 > 1){
            orderCount--;
        }
    }    

    if(CheckCollisionPointRec(mouse, returnButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            StaticVarReset(itemNameInput, itemIdInput, itemPriceInput, itemName, itemId, itemPrice);
            orderCount = 0;
            itemPtr = nullptr;
            screen = prevPage;
        }
    }
}

void SPrint(int &screen, Menu menu)
{
    Vector2 mouse = GetMousePosition();

    Rectangle idBox = {95, 109, 305, 61};
    Rectangle timeBox = {95,195,305,61};
    Rectangle totalBox = {95, 281, 305, 61};
    Rectangle subTotalBox = {492, 109, 214, 61};
    Rectangle taxBox = {492, 195, 214, 61};
    Rectangle orderListButton = {492, 281, 214, 61};
    Rectangle preButton = {20, 195, 61, 61};
    Rectangle nextButton = {720, 195, 61, 61};

    Rectangle returnButton = {251, 367, 298, 61};

    int totalSale = 0;
    totalSale = menu.GetNumberOfSale();

    salePtr = menu.sale;
    for(int i =0; i<count; i++){
        salePtr = salePtr->next;
    }
    saleId = salePtr->GetId();
    saleTime = salePtr->GetTime();
    subTotalPrice = salePtr->GetTotal();
    ordersList = salePtr->GetOrders();
    DrawTextXCenter(TextFormat("Sale Mode -> Print Sales [%d/%d]",count+1, totalSale), 50, H2, BLACK);
    DrawDisplayBox(idBox, WHITE, BLACK, TextFormat("%d", saleId), H2, BLACK, "Sale ID");
    DrawDisplayBox(timeBox, WHITE, BLACK, TextFormat("%s", saleTime.c_str()), H2, BLACK, "Time");
    DrawDisplayBox(totalBox, WHITE, BLACK, TextFormat("$%.3f", subTotalPrice+(subTotalPrice*(menu.GetTax()/100))), H2, BLACK, "Total");
    DrawDisplayBox(subTotalBox, WHITE, BLACK, TextFormat("$%.3f", subTotalPrice), H2, BLACK, "Sub Total");
    DrawDisplayBox(taxBox, WHITE, BLACK, TextFormat("$%.3f", (subTotalPrice*(menu.GetTax()/100))), H2, BLACK, TextFormat("Tax %.2f%%", menu.GetTax()));
    DrawButtonWithText(orderListButton, WHITE, BLACK, "OrderList", H2, BLACK);

    DrawButtonWithText(returnButton, WHITE, BLACK, "Return", H2, BLACK);
    DrawButtonWithText(nextButton, WHITE, BLACK, "->", H2, BLACK);
    DrawButtonWithText(preButton, WHITE, BLACK, "<-", H2, BLACK);

    if(CheckCollisionPointRec(mouse, nextButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && count+1 < totalSale){
            count++;
        }
    }
    if(CheckCollisionPointRec(mouse, preButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && count+1 > 1){
            count--;
        }
    }    

    if(CheckCollisionPointRec(mouse, orderListButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            prevPage = S_Print;
            screen = S_Order_List;
        }
    }

    if(CheckCollisionPointRec(mouse, returnButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            StaticVarReset(itemIdInput, saleIdInput, quantityInput, itemId, saleId, ordersList, quantity, subTotalPrice, saleTime);
            count = 0;
            salePtr = nullptr;
            screen = SaleMain;
        }
    }
}

void SDelete(int &screen, Menu &menu)
{
    Vector2 mouse = GetMousePosition();
    Rectangle removeButton = {408, 367, 298, 61};
    Rectangle cancelButton = {95, 367, 298, 61};
    DrawTextXCenter("Sale Mode -> Delete all Sales", 50, H2, RED);
    DrawTextXCenter("WARNING: All sales datas will be deleted can can't be recovered", 198, H2, RED);
    DrawTextXCenter("Please confirm", 225, H2, RED);

    DrawButtonWithText(removeButton, RED, BLACK, "Delete", H2, BLACK);
    DrawButtonWithText(cancelButton, WHITE, BLACK, "Cancel", H2, BLACK);

    if(CheckCollisionPointRec(mouse, removeButton)){
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)){
            menu.ClearSales();
            screen = SaleMain;
        }
    }

    if(CheckCollisionPointRec(mouse, cancelButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = SaleMain;
        }
    }
}

void SError(int &screen)
{
    Rectangle returnButton = {251, 195, 298, 61};
    Vector2 mousePosition = GetMousePosition();
    DrawTextXCenter("Sale Mode -> Error", 50, H2, RED);
    DrawButtonWithText(returnButton, WHITE, BLACK, "Return", H2, BLACK);
    DrawTextXCenter("There are several reasons give you error", 256, H2, RED);
    DrawTextXCenter("Memory allocating, Items Errors,... ", 282, H2, RED);
    DrawTextXCenter("Please check again", 339, H2, RED);
    if(CheckCollisionPointRec(mousePosition, returnButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = SaleMain;
        }
    }
}

void SNotFound(int &screen)
{
    Rectangle returnButton = {251, 195, 298, 61};
    Vector2 mousePosition = GetMousePosition();
    DrawTextXCenter("Sale Mode -> No Sale Found", 50, H2, RED);
    DrawButtonWithText(returnButton, WHITE, BLACK, "Return", H2, BLACK);
    if(CheckCollisionPointRec(mousePosition, returnButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = SaleMain;
        }
    }
}

void SItemList(int &screen, Menu menu)
{

    Vector2 mouse = GetMousePosition();

    Rectangle nameBox = {95, 109, 611, 61};
    Rectangle idBox = {95, 195, 611, 61};
    Rectangle priceBox = {95, 281, 611, 61};
    
    Rectangle preButton = {160, 367, 61, 61};
    Rectangle nextButton = {579, 367, 61, 61};

    Rectangle returnButton = {251, 367, 298, 61};

    int totalItem = 0;
    totalItem = menu.GetNumberOfItem();

    itemPtr = menu.item;
    for(int i =0; i<count; i++){
        itemPtr = itemPtr->next;
    }
    itemName = itemPtr->GetName();
    itemId = itemPtr->GetId();
    itemPrice = itemPtr->GetPrice();
    DrawTextXCenter(TextFormat("Sale Mode -> Items List [%d/%d]",count+1, totalItem), 50, H2, BLACK);
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
            screen = prevPage;
        }
    }
}

void REod(int &screen)
{
    Vector2 mouse = GetMousePosition();
    DrawTextXCenter("Report Mode -> End-of-Day Summary", 50, H2, BLACK);
    
    Rectangle dayBox = {291,164, 61,61};
    Rectangle monthBox = {370,164,61,61};
    Rectangle yearBox = {449,164,61,61};

    Rectangle showSummary = {408, 367,298,61};
    Rectangle cancel = {95,367,298,61};

    DrawText("/", 357,181,H2,BLACK);
    DrawText("/",436,181,H2,BLACK);
    DrawButtonWithText(showSummary, WHITE, BLACK, "Show Summary", H2,BLACK);
    DrawButtonWithText(cancel, WHITE, BLACK, "Cancel", H2,BLACK);
    DrawIntInputBox(dayBox,"DD",reportVar.day,2,reportVar.dayInput);
    DrawIntInputBox(monthBox,"MM",reportVar.month,2,reportVar.monthInput);
    DrawIntInputBox(yearBox,"YYYY",reportVar.year,4,reportVar.yearInput);

    if(CheckCollisionPointRec(mouse, cancel)){
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
            reportVar.Clear();
            screen = ReportMain;
        }
    }

    if(CheckCollisionPointRec(mouse, showSummary)){
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && reportVar.day != 0 && reportVar.month != 0 && reportVar.year != 0){
            screen = R_EodDisplay;
        }
    }
}

void ReodDisplay(int &screen, Menu menu)
{
    Vector2 mouse = GetMousePosition();
    DrawTextXCenter(TextFormat("Report Mode -> End-of-Day Summary: %s/%d/%d",month[reportVar.month], reportVar.day, reportVar.year), 50, H2, BLACK);

    Rectangle numberOfSaleBox = {125,110,537,61};
    Rectangle totalBox = {125,198,537,61};
    Rectangle saleAfterTaxBox = {125,286,305,61};
    Rectangle TaxBox = {469,286,193,61};

    Rectangle cancel = {95,367,298,61};

    float total = menu.GetTotalSale(reportVar.day, reportVar.month, reportVar.year);

    string time = to_string(reportVar.year) + "-" + to_string(reportVar.month) + "-" + to_string(reportVar.year);

    DrawDisplayBox(numberOfSaleBox, WHITE, BLACK, TextFormat("%d", menu.GetNumberOfSale(reportVar.day, reportVar.month, reportVar.year)), H2, BLACK, "Number of Sale");
    DrawDisplayBox(totalBox, WHITE,BLACK, TextFormat("$%.3f", total), H2, BLACK, "Total Sale");
    DrawDisplayBox(saleAfterTaxBox, WHITE, BLACK, TextFormat("$%.3f", total - (total*(menu.GetTax()/100))), H2, BLACK, "Sale after Tax");
    DrawDisplayBox(TaxBox, WHITE, BLACK, TextFormat("$%.2f", total*(menu.GetTax()/100)), H2, BLACK, TextFormat("%.2f%%", menu.GetTax()));


    DrawButtonWithText(cancel, WHITE, BLACK, "Cancel", H2,BLACK);
    if(CheckCollisionPointRec(mouse, cancel)){
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
            reportVar.Clear();
            screen = ReportMain;
        }
    }
}

void TaxSetting(int &screen, Menu& menu)
{
    Vector2 mouse = GetMousePosition();
    DrawTextXCenter("Report Mode -> Tax Setting", 50, H2, BLACK);
    DrawTextXCenter(TextFormat("Current Tax Rate: %.2f%%", menu.GetTax()), 77, H2, BLACK);

    Rectangle taxBox = {132, 181, 537, 61};
    Rectangle cancelButton = {95, 367, 298, 61};
    Rectangle saveButton = {408, 367, 298, 61};
    float taxTemp;
    DrawFloatInputBox(taxBox, "Tax Rate", taxTemp, taxInput);
    DrawButtonWithText(cancelButton, WHITE, BLACK, "Cancel", H2, BLACK);
    DrawButtonWithText(saveButton, WHITE, BLACK, "Save", H2, BLACK);
    
    if(CheckCollisionPointRec(mouse, saveButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            menu.SetTax(taxTemp);
            taxInput.Clear();
            screen = ReportMain;
        }
    }

    if(CheckCollisionPointRec(mouse, cancelButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            taxInput.Clear();
            screen = ReportMain;
        }
    }
}

void RExport(int &screen, Menu menu)
{
    Vector2 mouse = GetMousePosition();
    DrawTextXCenter("Report Mode -> Export Summary", 50, H2, BLACK);
    
    Rectangle dayBox = {291,164, 61,61};
    Rectangle monthBox = {370,164,61,61};
    Rectangle yearBox = {449,164,61,61};

    Rectangle showSummary = {408, 367,298,61};
    Rectangle cancel = {95,367,298,61};

    DrawText("/", 357,181,H2,BLACK);
    DrawText("/",436,181,H2,BLACK);
    DrawButtonWithText(showSummary, WHITE, BLACK, "Export", H2,BLACK);
    DrawButtonWithText(cancel, WHITE, BLACK, "Cancel", H2,BLACK);
    DrawIntInputBox(dayBox,"DD",reportVar.day,2,reportVar.dayInput);
    DrawIntInputBox(monthBox,"MM",reportVar.month,2,reportVar.monthInput);
    DrawIntInputBox(yearBox,"YYYY",reportVar.year,4,reportVar.yearInput);

    if(CheckCollisionPointRec(mouse, cancel)){
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
            reportVar.Clear();
            screen = ReportMain;
        }
    }

    if(CheckCollisionPointRec(mouse, showSummary)){
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && reportVar.day != 0 && reportVar.month != 0 && reportVar.year != 0){
            string date = to_string(reportVar.year) + "-" + to_string(reportVar.month) + "-" + to_string(reportVar.day);
            ExportSummary("Summary.txt", menu, date);
            screen = R_ExportInfo;
        }
    }
}

void RExportInfo(int &screen)
{
    Rectangle returnButton = {251, 195, 298, 61};
    Vector2 mousePosition = GetMousePosition();
    string fileName = to_string(reportVar.month) + "/" + to_string(reportVar.day) + "/" + to_string(reportVar.year);
    DrawTextXCenter("Sale Mode -> File Exported: Summary.txt", 50, H2, BLACK);
    DrawButtonWithText(returnButton, WHITE, BLACK, "Return", H2, BLACK);
    if(CheckCollisionPointRec(mousePosition, returnButton)){
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            screen = ReportMain;
        }
    }
}

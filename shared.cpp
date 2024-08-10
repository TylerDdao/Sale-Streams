#include "shared.h"

void StaticVarReset(InputBox& itemNameInput, InputBox& itemIdInput, InputFloatBox& itemPriceInput, string& itemName, string& itemId, float& itemPrice)
{
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

    itemName = "\0";
    itemId = "\0";
    itemPrice = 0;
}
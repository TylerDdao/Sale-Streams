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

void StaticVarReset(InputBox& itemIdInput, InputBox& saleIdInput, InputBox& quantityInput, string& itemId, int& saleId, vector<string>& ordersList, int& quantity, float& totalPrice, string& saleTime){
    quantityInput.Clear();
    saleIdInput.Clear();
    itemIdInput.Clear();
    itemId = "\0";
    saleId = 0;
    ordersList.clear();
    quantity = 0;
    totalPrice = 0;
    saleTime = "\0";
}

void InputBox::Clear()
{
    this->inputText[0] = '\0';
    this->isActive = false;
    this->textLength = 0;
}

void InputFloatBox::Clear()
{
    this->inputText[0] = {0};
    this->textLength = 0;
    this->isActive = false;
    this->hasDecimalPoint = false;
}

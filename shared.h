#pragma once

#include <string>
#include "Menu.h"
using namespace std;

#define MAX_CHARS 50
#define MAX_ID 10

struct InputBox {
    char inputText[MAX_CHARS + 1] = {0};
    int textLength = 0;
    bool isActive = false;
};

struct InputFloatBox {
    char inputText[MAX_CHARS + 1] = {0};
    int textLength = 0;
    bool isActive = false;
    bool hasDecimalPoint = false;
};

static string itemName = "\0";
static string itemId = "\0";
static float itemPrice = 0;

static int count = 0;

static InputBox itemNameInput;
static InputBox itemIdInput;
static InputFloatBox itemPriceInput;

static Item* itemPtr = nullptr;

void StaticVarReset(InputBox& itemNameInput, InputBox& itemIdInput, InputFloatBox& itemPriceInput, string& itemName, string& itemId, float& itemPrice);

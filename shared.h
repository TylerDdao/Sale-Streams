#pragma once

#include <string>
#include "Menu.h"
using namespace std;

#define MAX_CHARS 50
#define MAX_ID 10

static char* month[] = { "", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC" };

class InputBox {
    public:
    char inputText[MAX_CHARS + 1] = {0};
    int textLength = 0;
    bool isActive = false;
    void Clear();
};

class InputFloatBox {
    public:
    char inputText[MAX_CHARS + 1] = {0};
    int textLength = 0;
    bool isActive = false;
    bool hasDecimalPoint = false;

    void Clear();
};

static string itemName = "\0";
static string itemId = "\0";
static float itemPrice = 0;

static string itemId2 = "\0";

static int count = 0;

static InputBox itemNameInput;
static InputBox itemIdInput;
static InputFloatBox itemPriceInput;

static Item* itemPtr = nullptr;

void StaticVarReset(InputBox& itemNameInput, InputBox& itemIdInput, InputFloatBox& itemPriceInput, string& itemName, string& itemId, float& itemPrice);

static InputBox saleIdInput;
static InputBox quantityInput;
static int saleId = 0;
static string saleTime = "\0";
static vector<string> ordersList;
static int quantity = 0;
static float subTotalPrice = 0;
static int prevPage = -1;

static Sale* salePtr = nullptr;

static InputFloatBox taxInput;

class ReportVar{
    public:
    int day;
    int month;
    int year;

    InputBox dayInput;
    InputBox monthInput;
    InputBox yearInput;

    void Clear();
};

static ReportVar reportVar;

void StaticVarReset(InputBox& itemIdInput, InputBox& saleIdInput, InputBox& quantityInput, string& itemId, int& saleId, vector<string>& ordersList, int& quantity, float& totalPrice, string& saleTime);
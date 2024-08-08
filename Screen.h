#pragma once
#include "raylib.h"
#include "UI.h"

#define H1 50
#define H2 20

typedef enum Screen {Home = 0, Config, Sale, Report, Reset, Quit, C_Add, C_Add_Confirm, C_Remove, C_Edit, C_Search, C_Print, C_Delete, Search_Display_Item} SCREEN;

static float timer = 0;
static InputBox itemNameInput;
static InputBox itemIdInput;
static InputFloatBox itemPriceInput;

void HomeScreen(int& screen);
void ConfigScreen(int& screen);
void SaleScreen(int& screen);
void ReportScreen(int& screen);

void CAdd(int &screen, string& name, string& id, float& price);
void CRemove(int& screen, string& id);//Parament is pointer to item class
void CSearchDisplay(int& screen, string name, string id, float price);

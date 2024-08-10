#pragma once
#include "raylib.h"
#include "UI.h"
#include "TimeModule.h"
#include "Menu.h"

// Rectangle = {x, y, w, h}

#define H1 50
#define H2 20

typedef enum Screen {Home = 0, ConfigMain, SaleMain, ReportMain, Reset, Quit, C_Add, C_Remove, C_Remove_Confirm, C_Edit, C_Search, C_Search_Result, C_Not_Found, C_Print, C_Delete, Search_Display_Item} SCREEN;

void HomeScreen(int& screen);
void ConfigScreen(int& screen);
void SaleScreen(int& screen);
void ReportScreen(int& screen);

void CAdd(int &screen, Menu& menu);
void CRemove(int& screen, Menu& menu);
void CRemoveConfirm(int& screen, Menu& menu);
void CSearch(int& screen, Menu menu);
void CSearchResult(int& screen);
void CEdit(int& screen, Menu& menu);
void CEditConfirm(int& screen, Menu& menu);
void CPrint(int& screen, Menu& menu);

void CNotFount(int& screen);

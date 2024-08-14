#pragma once
#include "raylib.h"
#include "UI.h"
#include "TimeModule.h"
#include "Menu.h"

// Rectangle = {x, y, w, h}

#define H1 50
#define H2 20

typedef enum Screen {Home = 0, ConfigMain, SaleMain, ReportMain, Reset, Quit, 
C_Add, C_Remove, C_Remove_Confirm, C_Edit, C_Edit_Result, C_Modify, C_Search, C_Search_Result, C_Not_Found, C_Print, C_Delete, Search_Display_Item, C_Error,
S_Add, S_Add_Confirm, S_Remove, S_Remove_Confirm, S_Search, S_Search_Result, S_Print, S_Order_List, S_Not_Found, S_Error, S_Items_List, S_Delete,
R_Eod, R_EodDisplay, R_Tax_Setting, R_Export, R_ExportInfo} SCREEN;

void HomeScreen(int& screen);
void ConfigScreen(int& screen);
void SaleScreen(int& screen);
void ReportScreen(int& screen);
void ResetAll(int&screen, Menu& menu);
//Config mode
void CAdd(int &screen, Menu& menu);
void CRemove(int& screen, Menu& menu);
void CRemoveConfirm(int& screen, Menu& menu);
void CSearch(int& screen, Menu menu);
void CSearchResult(int& screen, Menu& menu);
void CEdit(int& screen, Menu menu);
void CEditResult(int& screen, Menu menu);
void CModify(int& screen, Menu& menu);
void CPrint(int& screen, Menu& menu);
void CDelete(int& screen, Menu& menu);
void CNotFount(int& screen);
void CError(int& screen);

//Sale mode
void SAdd(int& screen, Menu menu);
void SAddConfirm(int& screen, Menu& menu);

void SSearch(int& screen, Menu menu);
void SSearchResult(int&screen, Menu& menu);

void SOrderList(int& screen, Menu menu);
void SPrint(int& screen, Menu menu);
void SDelete(int& screen, Menu& menu);

void SError(int& screen);
void SNotFound(int&screen);
void SItemList(int& screen, Menu menu);

//Report mode
void REod(int& screen);
void ReodDisplay(int&screen, Menu menu);
void TaxSetting(int& screen, Menu& menu);
void RExport(int& screen, Menu menu);
void RExportInfo(int& screen);

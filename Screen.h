#pragma once
#include "raylib.h"
#include "UI.h"

#define H1 50
#define H2 20

typedef enum Screen {Home = 0, Config, Sale, Report, Reset, Quit, C_Add, C_Remove, C_Edit, C_Search, C_Print, C_Delete} SCREEN;

void HomeScreen(int& screen);
void ConfigScreen(int& screen);
void SaleScreen(int& screen);
void ReportScreen(int& screen);

void MainScreens(int& screen, bool& running);

void CAdd(int &screen, string& name, string& id, float& price);

void ConfigSubScreen(int& screen, bool& configRunning);

void StartUpScreen();
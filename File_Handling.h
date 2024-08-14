#pragma once
#include "Menu.h"
#include <fstream>
#include <sstream>
using namespace std;

bool SaveItems(string fileName, Menu menu); //Done
bool LoadItems(string fileName, Menu& menu); //Done

bool SaveSales(string fileName, Menu menu); //Done
bool LoadSales(string fileName, Menu& menu); //Done

bool SaveConfig(string fileName, Menu menu);
bool LoadConfig(string fileName, Menu& menu);

bool Save(Menu menu); //Done
bool Load(Menu& menu); //Done
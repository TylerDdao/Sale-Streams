#pragma once
#include <iostream>
#include "raylib.h"
#include "TimeModule.h"
#include "Screen.h"
#include "Menu.h"
#include "shared.h"
#include "File_Handling.h"

using namespace std;

void DrawTextCenter(const char* text, float fontSize, Color textColor);
void DrawTextXCenter(const char* text, int posY, float fontSize, Color textColor);

void DrawCurrentTime(int posX, int posY, float fontSize, Color textColor);

void DrawButton(int posX, int posY, int w, int h, int boderSize, Color bColor, Color lColor);
void DrawButtonWithText(Rectangle rec, Color bColor, Color lColor,const char* text, float fontSize, Color textColor);
void DrawDisplayBox(Rectangle rec, Color bColor, Color lColor,const char* content, float fontSize, Color textColor, const char* title);

void DrawInputBox(Rectangle rec, const char* boxTitle, string& savedText, int MaxChars, InputBox& inputBox);
void DrawIntInputBox(Rectangle rec,const char* boxTitle, int& savedNumb, int MaxChars, InputBox& inputBox);
void DrawFloatInputBox(Rectangle rec,const char* boxTitle, float& savedValue, InputFloatBox& inputBox);
bool is_number_or_decimal(const char* str);

// void HomeScreen();

void UIStart(int& current, bool& running, Menu& menu);
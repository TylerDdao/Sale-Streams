#pragma once
#include <iostream>
#include "raylib.h"
#define MAX_CHARS 50
#define MAX_ID 10
using namespace std;

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

void DrawTextCenter(const char* text, float fontSize, Color textColor);
void DrawTextXCenter(const char* text, int posY, float fontSize, Color textColor);

void DrawButton(int posX, int posY, int w, int h, int boderSize, Color bColor, Color lColor);
void DrawButtonWithText(Rectangle rec, Color bColor, Color lColor,const char* text, float fontSize, Color textColor);
void DrawDisplayBox(Rectangle rec, Color bColor, Color lColor,const char* content, float fontSize, Color textColor, const char* title);

void DrawInputBox(Rectangle rec, const char* boxTitle, string& savedText, int MaxChars, InputBox& inputBox);
void DrawIntInputBox(Rectangle rec,const char* boxTitle, int& savedNumb, int MaxChars, InputBox& inputBox);
void DrawFloatInputBox(Rectangle rec,const char* boxTitle, float& savedValue, InputFloatBox& inputBox);
bool is_number_or_decimal(const char* str);

// void HomeScreen();
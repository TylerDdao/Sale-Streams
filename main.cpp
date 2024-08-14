/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute raylib_compile_execute script
*   Note that compiled executable is placed in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   Example originally created with raylib 1.0, last time updated with raylib 1.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2013-2024 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
#include "Screen.h"
#include "TimeModule.h"
#include "Menu.h"

int main(void)
{
    Image icon = LoadImage("sales.png");
    srand(time(NULL));
    Menu menu;
    Load(menu);
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;
    // typedef enum Screen {INTRO = 0, HOME} SCREEN;
    InitWindow(screenWidth, screenHeight, "Sale Streams v1.0");
    bool running = true;
    SetWindowIcon(icon);
    SetTargetFPS(60);
    //--------------------------------------------------------------------------------------
    int current = Home;
    while (running)
    {
        UIStart(current, running, menu);
    }
    UnloadImage(icon);
    CloseWindow();
    return 0;
}

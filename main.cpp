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

    // Rectangle config = {251, 87,298, 61};
    // Rectangle sale = {251, 158, 298, 61};
    // Rectangle report = {251, 229, 298, 61};
    // Rectangle reset = {251, 300, 298, 61};
    // Rectangle quit = {251, 371, 298, 61};

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;
    // typedef enum Screen {INTRO = 0, HOME} SCREEN;
    InitWindow(screenWidth, screenHeight, "Screen");
    int screen =0;
    bool running = true;
    string name, id; 
    float price;
    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    InputBox i1;
    //--------------------------------------------------------------------------------------
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Rectangle rec{95, 109, 611, 61};
        BeginDrawing();
        ClearBackground(RAYWHITE);
        CAdd(screen, name, id, price);
        EndDrawing();
    }
    // cout << name<<endl;
    // cout << id<<endl;
    // cout << price<<endl;
    CloseWindow();
    return 0;
}

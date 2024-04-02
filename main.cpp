// From following C++ tutorial from GamedevTV
#include "raylib.h"
int main()
{
    int windowDimensions[2];
    windowDimensions[0] = 384;
    windowDimensions[1] = 384;

    InitWindow(windowDimensions[0], windowDimensions[1], "Jim's Top Down Game");

    SetTargetFPS(60);

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(WHITE);

        EndDrawing();
    }

    CloseWindow();
}
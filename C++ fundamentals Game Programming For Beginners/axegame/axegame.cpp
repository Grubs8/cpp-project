#include "raylib.h"

int main()
{
    // window dimensions
    int width{1350};
    int height{1200};
    InitWindow(width,height, "Grub Window");

    // circle cordinates
    int circle_x{174};
    int circle_y{100};
    int circle_size{50};
    int speed{10};

    SetTargetFPS(60);
    // canvas initial drawing
    while(WindowShouldClose() == false){

        BeginDrawing();
        ClearBackground(WHITE);


        // Game Logic Begins
        DrawCircle(circle_x,circle_y,circle_size,BLUE);

        if(IsKeyDown(KEY_D))
        {
            circle_x = circle_x + speed;            
        }
        if(IsKeyDown(KEY_A))
        {
            circle_x = circle_x - speed;
        }
        if(IsKeyDown(KEY_W))
        {
            circle_y = circle_y - speed;
        }
        if(IsKeyDown(KEY_S))
        {
            circle_y = circle_y + speed;
        }

        // Game Logic Ends
        EndDrawing();

    }
}




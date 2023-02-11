#include "raylib.h"

int main()
{
    // window dimensions
    int width{1350};
    int height{1200};
    InitWindow(width, height, "Grub Window");

    // circle coordinates
    int circle_x{175};
    int circle_y{100};
    int circle_size{25};
    int speed{5};
    double gravity{0};

    // circle edges
    int l_circle_x{circle_x - circle_size};
    int r_circle_x{circle_x + circle_size};
    int u_circle_y{circle_y - circle_size};
    int b_circle_y{circle_y + circle_size};

    // axe coordinates
    int axe_x{150};
    int axe_y{100};
    int axe_width{50};
    int axe_height{50};

    int direction{10};

    // axe edges
    int l_axe_x{axe_x};
    int r_axe_x{axe_x + axe_width};
    int u_axe_y{axe_y};
    int b_axe_y{axe_y + axe_height};


    SetTargetFPS(60);
    // canvas initial drawing
    while (WindowShouldClose() == false)
    {

        BeginDrawing();
        ClearBackground(WHITE);

        // axe gravity
        axe_y += gravity;
        axe_y += direction;

        if (axe_y > height || axe_y < 0)
        {
            direction = -direction;
        }

        // Game Logic Begins
        DrawCircle(circle_x, circle_y, circle_size, BLUE);
        DrawRectangle(axe_x, axe_y, axe_width, axe_height, RED);

        if (IsKeyDown(KEY_D) && circle_x < width - circle_size)
        {
            circle_x += speed;
            axe_x += speed;
        }
        if (IsKeyDown(KEY_A) && circle_x > 0 + circle_size)
        {
            circle_x -= speed;
            axe_x -= speed;
        }
        if (IsKeyDown(KEY_W) && circle_y > 0 + circle_size)
        {
            circle_y -= speed;
        }
        if (IsKeyDown(KEY_S) && circle_y < height - circle_size)
        {
            circle_y += speed;
        }

        // Game Logic Ends
        EndDrawing();
    }
}

#include <iostream>
#include "raylib.h"

int main(void)
{
	const int screenWidth = 800;
	const int screenHeight = 450;
	InitWindow(screenWidth, screenHeight, "2D Raylib RPG Engine");
	SetTargetFPS(60);

	while (!WindowShouldClose() )
	{
		BeginDrawing();
			ClearBackground(RAYWHITE);
			DrawText("Welcome in my 2D Raylib RPG Engine!", 190, 200, 20, LIGHTGRAY);
		EndDrawing();
	}
	CloseWindow();

	return 0;
}


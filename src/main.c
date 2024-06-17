#include "raylib.h"

extern void plum( void );

int main(void)
{
	const int screenWidth = 800;
	const int screenHeight = 450;

	plum();

	InitWindow(screenWidth, screenHeight, "dismal display of hubris");
	SetTargetFPS(60);

	Camera2D camera = { 0 };
	camera.zoom = 1.0f;

	while (!WindowShouldClose())
	{
		BeginDrawing();
		{
			const Vector2 pos = { 190, 200 };
			ClearBackground(RAYWHITE);

			BeginMode2D(camera);
			DrawText("raylib", 190, 200, 20, LIGHTGRAY);
			EndMode2D();
		}
		EndDrawing();
	}

	CloseWindow();

	return 0;
}

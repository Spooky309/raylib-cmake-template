#include "raylib.h"

int main( void ) {
	const int screenWidth = 800;
	const int screenHeight = 600;

	InitWindow( screenWidth, screenHeight, "somatic catastrophe" );
	SetTargetFPS( 60 );

	Camera2D camera = { 0 };
	camera.zoom = 1.0f;

	while ( !WindowShouldClose() ) {
		BeginDrawing();
		{
			const Vector2 pos = { 190, 200 };
			ClearBackground( RAYWHITE );

			BeginMode2D( camera );
			{
				DrawText( "i love rock n roll", 190, 200, 20, LIGHTGRAY );
			}
			EndMode2D();
		}
		EndDrawing();
	}

	CloseWindow();

	return 0;
}

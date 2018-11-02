#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics.hpp>
using namespace sf;
namespace Pong {
	const int WIDTH = 20;
	const int HEIGHT = 70;
	//const int SQUARE = 20;

	void InitGame(int height, int width);
	void UpdateGame();
	void DrawGame();

}
#endif // !GAME_H

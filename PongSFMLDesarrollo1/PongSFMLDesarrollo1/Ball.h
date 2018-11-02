#ifndef BALL_H
#define BALL_H
#include <SFML/Graphics.hpp>
using namespace sf;
namespace Pong {
	const int SQUARE = 20;
	void InitBall();
	void UpdateBall();
	void DrawBall();
}
#endif // !BALL_H

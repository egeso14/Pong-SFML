#pragma once
#include "../../Header/Entities/Paddle.h"
#include "../../Header/Entities/Ball.h"

namespace Gameplay
{
	class GameplayManager
	{
	private:

		float player1_position_x = 40.0f;
		float player1_position_y = 300.0f;

		float player2_position_x = 1210.0f;
		float player2_position_y = 300.0f;

		Paddle* player1_paddle;
		Paddle* player2_paddle;
		Ball* ball;
		void initialize();
	public:
		GameplayManager();
		void render(sf::RenderWindow* game_window);
		void update();

	};
} // namespace Gameplay
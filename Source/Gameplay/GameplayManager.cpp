#include "../../Header/Gameplay/GameplayManager.h"

namespace Gameplay
{
	GameplayManager::GameplayManager()
	{
		initialize();
	}

	void GameplayManager::initialize()
	{
		player1_paddle = new Paddle(player1_position_x, player1_position_y);
		player2_paddle = new Paddle(player2_position_x, player2_position_y);
		ball = new Ball();
	}

	void GameplayManager::render(sf::RenderWindow* game_window)
	{
		player1_paddle->render(game_window);
		player2_paddle->render(game_window);
		ball->render(game_window);
	}
}
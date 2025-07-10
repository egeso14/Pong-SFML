#include "../../Header/Core/GameLoop.h"

namespace Core
{
	void GameLoop::initialize()
	{
		gameWindowManager = new GameWindowManager();
		eventManager = new Events::EventManager();
		gameWindowManager->initialize();
	}
	bool GameLoop::isGameRunning()
	{
		return gameWindowManager->isGameRunning();
	}
	void GameLoop::pollEvents()
	{
		eventManager->pollEvents(gameWindowManager->getGameWindow());
	}
	void GameLoop::render()
	{
		gameWindowManager->clearGameWindow();
		gameWindowManager->displayGameWindow();
	}
	void GameLoop::update()
	{
		// Update game logic here
		// For example, update game objects, check collisions, etc.
		// This is a placeholder for future updates.
	}
}



#include "../../Header/Core/GameWindowManager.h"
#include "../../Header/Event/EventManager.h"


namespace Core
{
	class GameLoop
	{
	private:
		Events::EventManager* eventManager;
		GameWindowManager* gameWindowManager;

	public:
		void initialize();
		bool isGameRunning();
		void pollEvents();
		void update();
		void render();
	};

}
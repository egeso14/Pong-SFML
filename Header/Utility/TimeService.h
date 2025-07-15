#pragma once
#include <chrono>

namespace Utility
{
	class TimeService
	{
	private:
		std::chrono::steady_clock::time_point previous_time;
		static TimeService* instance;
		float delta_time;
		TimeService();
		~TimeService() = default;
		void updateDeltaTime();
		float calculateDeltaTime();
		void updatePreviousTime(); // Update previous_time to the current time
		void initialize();
	public:
		static TimeService* getInstance();
		void update();
		float getDeltaTime();
	};
}
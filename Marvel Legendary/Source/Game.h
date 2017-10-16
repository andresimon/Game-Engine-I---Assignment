#pragma once

#include "ProcessManager.h"
#include "Settings.h"
#include "BoardActor.h"


class Game
{
	public:
		Game();
		~Game();

	private:
		ProcessManager procManager;
		Settings settings;
		BoardActor board;

		bool Initialization();
		bool MainLoop();
		bool Shutdown();
};


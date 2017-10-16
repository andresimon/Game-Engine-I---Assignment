#pragma once

#include <list>

#include "ActorFactory.h"
#include "PlayerActor.h"
#include "TurnControlComponent.h"

class BoardActor
{
	public:
		BoardActor();
		~BoardActor();

	private:
		ActorFactory actorFactory;
		std::list<PlayerActor> players;
		
};


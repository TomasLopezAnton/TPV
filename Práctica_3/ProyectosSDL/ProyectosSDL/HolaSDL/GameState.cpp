#include "Game.h"
#include "GameState.h"

GameState::GameState(SDLApplication* game) : game(game) {}

void GameState::exitGame()
{
	game->exitGame();
}

bool GameState::getExit()
{
	return game->getExit();
}

Texture* GameState::getTexture(int num)
{
	return game->getTexture(num);
}
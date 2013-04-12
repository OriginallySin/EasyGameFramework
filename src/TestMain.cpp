#include "GameFlow.h"

int main(int agrc,char* argv[])
{
    GameFlow* game = new GameFlow();
    game->GameStart();
    game->GameLoop();
    game->GameExit();
    delete(game);
    return 0;
}

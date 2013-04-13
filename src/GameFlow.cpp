#include "../include/GameFlow.h"

GameFlow::GameFlow()
{
    //ctor
}

GameFlow::~GameFlow()
{
    //dtor
}

int GameFlow::GameStart(void)
{
    int ret = 1;
    std::cout << "Game Is Started~!" << std::endl;
    return ret;
}

int GameFlow::GameExit(void)
{
    int ret = 1;
    std::cout << "Game Is End~!" << std::endl;
    return ret;
}

char GameFlow::GameInput(void)
{
    char Key_Input;
    std::cin >> Key_Input;
    return Key_Input;
}

int GameFlow::GameLoop(void)
{
    int ret = 1;
    char statu;
    while( 'q' != statu )
    {
        statu = GameInput();
    }
    return ret;
}

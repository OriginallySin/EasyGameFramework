#ifndef GAMEFLOW_H
#define GAMEFLOW_H

#include <iostream>

class GameFlow
{
    public:
        GameFlow();
        virtual ~GameFlow();
        int GameStart();
        int GameLoop();
        int GameExit();
        char GameInput();
    protected:
    private:
};

#endif // GAMEFLOW_H

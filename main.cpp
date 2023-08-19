#include <iostream>
#include <SDL2/SDL.h>
#include <Game/Engine.h>


const int WIDTH = 800, HEIGHT = 600;
Engine Game;
int main( int argc, char *argv[] )
{
    Game.Init("game in vscode",1200,700);
    SDL_Delay(4000);//4 segundos
    return EXIT_SUCCESS;
}
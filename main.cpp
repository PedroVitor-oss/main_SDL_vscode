#include <iostream>
#include <SDL2/SDL.h>
#include <Game/Engine.h>
#include <SDL2/SDL_image.h>


const int WIDTH = 800, HEIGHT = 600;
Engine Game;
int main( int argc, char *argv[] )
{
    IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG);

    
    Game.Init("game in vscode",1200,700);
    
    SDL_Delay(4000);//4 segundos
    return EXIT_SUCCESS;
}
#ifndef ENGINE_H
#define ENGINE_H

#include <SDL2/SDL.h>
#include <windows.h>
#include <iostream>
#include <fstream>
#include <cmath>


class Engine{
public:
    // controles basicos
    void Init(std::string title = "new window",int widthWindow = 1200,int heightWindow = 700);
   
private:
    SDL_Window* window = NULL;
    SDL_Renderer* screen = NULL;

    std::string nameSave = "save/save.txt";

};

void Engine::Init(std::string title, int widthWindow, int heightWindow ){

    
	
	if ( SDL_Init(SDL_INIT_VIDEO)== 0) {
		//sucessed
		std::cout<< "crie uma nova janela chamdade de :"<<title<<" com tamanho de "<<widthWindow<<"x"<<heightWindow;
		window = SDL_CreateWindow( title.c_str(),SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,widthWindow,heightWindow,SDL_WINDOW_SHOWN);
		screen = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
	}else{
		//erro
		std::cout<<"erro na iniciação";
	}

};





#endif // ENGINE_H
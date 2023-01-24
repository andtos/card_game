#include <iostream>
#include "Window.hpp"

int WIDTH, HEIGHT;

int main(int argc, char* argv[]) 
{
    Window window;
    window.getWindowResolution(WIDTH, HEIGHT);
    window.createWindow("Game Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_BORDERLESS);

    SDL_Event windowEvent;

    while (true) {
        if (SDL_PollEvent( &windowEvent) ){
            if ( SDL_QUIT == windowEvent.type) {
                break;
            }
        }
    }

    return EXIT_SUCCESS;
}
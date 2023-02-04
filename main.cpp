
#include <iostream>
#include "Game.hpp"
#include "Player.hpp"
#include "Deck.hpp"
#include "Card.hpp"
#include "Window.hpp"
//#include "Window.hpp"

int WIDTH, HEIGHT;

int main(int argc, char* argv[]) 
{
    Window window;
    window.getWindowResolution(WIDTH, HEIGHT);
    window.createWindow("Game Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_BORDERLESS);

    while (window.is_running) {
        SDL_Event event;
        if (SDL_PollEvent(&event)) {
            window.handleEvent(event);
        }
    }
    window.clean();
    // while (true) {
    //     if (SDL_PollEvent( &windowEvent) ){
    //         if ( SDL_QUIT == windowEvent.type) {
    //             break;
    //         }
    //     }
    // }
    // Deck deck;
    // Player player1;
    // Player player2;

    // Game Game(player1, player2, deck);

    // Game.startGame();

    return EXIT_SUCCESS;
}

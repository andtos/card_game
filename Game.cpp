#include "Game.hpp"

Game::Game(Player player1, Player player2){
    this player1 = player1;
    this player2 = player2;
}

Game::startGame() {
    Deck deck;
    deck = deck.initNewDeck();

    player1.drawCard(deck.draw());
    player1.drawCard(deck.draw());
    player2.drawCard(deck.draw());
    player2.drawCard(deck.draw());

    std::cout(Game::whoseWinning());
}

int Game::whoseWinning(){
    if (player1.total >= player2.total) {
        return 0;
    }
    else {
        return 1;
    }
}
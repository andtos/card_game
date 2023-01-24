#include "Game.hpp"

Game::Game(Player player1, Player player2){
    this player1 = player1;
    this player2 = player2;
}

Player Game::whoseWinning(Player player1, Player player2){
    if (player1.total >= player2.total) {
        return player1
    }
    else {
        return player2
    }
}
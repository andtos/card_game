#include <string>
#include "Game.hpp"

Game::Game(Player player1, Player player2){
    this player1 = player1;
    this player2 = player2;
}

int Game::evaluateTotal(int hand[]) {
    int sum = 0
    for (int i = 0; i < sizeof(hand)/sizeof(double); i++) {
        sum += array[i];
    }
    return sum
}

bool Game::isWinning(Player player){
    if (player.total > 21) {
        return 
    }
}
#include "Game.hpp"
#include <iostream>


Game::Game(Player player1, Player player2, Deck deck){
    this->player1 = player1;
    this->player2 = player2;
    this->deck = deck;
}

void Game::startGame() {
    deck = deck.initNewDeck();
    deck.shuffle();
    

    player1.drawCard(deck.draw());
    player1.drawCard(deck.draw());
    player2.drawCard(deck.draw());
    player2.drawCard(deck.draw());
    
    this -> player1 = Game::blackjack(player1);
    this -> player2 = Game::blackjack(player2);

    int winner = Game::whoseWinning();
    if(winner == 0){
        std::cout << "Tie";
    }
    else{
        std::cout << "Winner: player " << winner;
    }
}

Player Game::blackjack(Player player) {
    player.getHand();
    while (true) {
        if (player.handTotal() == 21) {
            std::cout << "You Win" << std::endl << '\n';
            return player;
        } 
        else if (player.handTotal() > 21) {
            std::cout << "You Lose" << std::endl << '\n';
            return player;
        }

        std::cout << "Would you like to draw or stop? [d/s]";
        char input;
        std::cin >> input;
        if (input == 'd' || input == 'D') {
            player.drawCard(deck.draw());
            player.getHand();
        }
        else if (input == 's' || input == 'S') {
            return player;
        }
        else {
            continue;
        }
    }

}

int Game::whoseWinning(){
    int player1_total = player1.handTotal();
    int player2_total = player2.handTotal();
    if ((player1_total > 21 && player2_total > 21) || (player1_total == player2_total)) {
        return 0;
    }
    else if (player1_total == 21) {
        return 1;
    }
    else if (player2_total == 21) {
        return 2;
    }
    else if (player1_total > player2_total) {
        return 1;
    }
    else {
        return 2;
    }
}
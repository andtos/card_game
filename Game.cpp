#include "Game.hpp"
#include <iostream>


Game::Game(Player player1, Player player2){
    this->player1 = player1;
    this->player2 = player2;
}

void Game::startGame() {
    Deck deck;
    deck = deck.initNewDeck();
    deck.shuffle();
    

    player1.drawCard(deck.draw());
    player1.drawCard(deck.draw());
    player2.drawCard(deck.draw());
    player2.drawCard(deck.draw());
    std::cout << player1.getHand1().getSuit() << " " << player1.getHand1().getValue() << " " << player1.getHand2().getSuit() 
    << " " << player1.getHand2().getValue()<< " total: " << player1.handTotal() << " player 1 hand \n";
     std::cout << player2.getHand1().getSuit() << " " << player2.getHand1().getValue() << " " << player2.getHand2().getSuit() 
    << " " << player2.getHand2().getValue()<< " total: " << player2.handTotal() << " player 2 hand \n";
    int winner = Game::whoseWinning();
    if(winner == 0){
        std::cout << "Tie";
    }
    else{
        std::cout << "Winner: player " << winner;
    }
}

int Game::whoseWinning(){
    if (player1.handTotal() == player2.handTotal()) {
        return 0;
    }
    else if(player1.handTotal() > player2.handTotal()){
        return 1;
    }
    else{
        return 2;
    }
}
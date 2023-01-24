#pragma once
#include <string>
#include "Player.hpp"
#include "Deck.hpp"

class Game
{
public:
  Game(Player player1, Player player2, Deck deck); 
  void startGame();  
  Player blackjack(Player player);
  int whoseWinning();
private:
    int score;
    Player player1;
    Player player2;
    Deck deck;
};
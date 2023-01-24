#pragma once
#include <string>
#include "Player.hpp"
#include "Deck.hpp"

class Game
{
public:
  Game(Player player1, Player player2); 
  void startGame();  
  int whoseWinning();
private:
    int score;
    Player player1;
    Player player2;
};
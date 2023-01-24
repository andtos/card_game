#pragma once
#include "Card.hpp"


class Player
{
public:
  Player::Player();
  int handTotal();
  void drawCard(Card c);
  
private:
    Card arr[2]; 
};
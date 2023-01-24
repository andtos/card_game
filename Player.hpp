#pragma once
#include "Card.hpp"



class Player
{
public:
  Player();
  int handTotal();
  void drawCard(Card c);
  Card getHand1();
  Card getHand2();
  
private:
    Card arr[2]; 
};
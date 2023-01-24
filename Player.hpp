#pragma once
#include <iostream>
#include <vector>
#include "Card.hpp"



class Player
{
public:
  Player();
  int handTotal();
  void drawCard(Card c);
  void getHand();
  
private:
  std::vector <Card> hand;
};
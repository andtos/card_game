#pragma once
#include "Card.hpp"


class deck
{
public:
  deck::deck();
  deck initNewDeck();
  void shuffle();
  card draw();
  
private:
    card arr[52]; 
};
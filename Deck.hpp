#pragma once
#include "Card.hpp"


class Deck
{
public:
  Deck();
  Deck initNewDeck();
  void shuffle();
  Card draw();
  
private:
    Card arr[52]; 
};

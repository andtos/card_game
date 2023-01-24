#pragma once
#include <string>

class Card
{
public:
  Card();
  Card(int x, std::string z);   
  int getValue();
  std::string getSuit();
  int isNull();
  void remove();
private:
    int value;
    std::string suit;
};

#pragma once
#include <string>

class Card
{
public:
  Card(int x, std::string z);   
  int getValue();
  std::string getSuit();
private:
    int value;
    std::string suit;
};
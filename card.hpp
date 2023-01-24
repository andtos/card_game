#pragma once
#include <string>

class card
{
public:
  card(int x, std::string z);   
  int getValue();
  std::string getSuit();
private:
    int value;
    std::string suit;
};
#include <string>
#include "Player.hpp"

class Game
{
public:
  Game(Player player1, Player player2);   
  int evaluateTotal(int hand[]);
  int isWinning(Player player);
private:
    int score;
    Player player1;
    Player player2;
};
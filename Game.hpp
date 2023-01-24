#include <string>
#include "Player.hpp"

class Game
{
public:
  Game(Player player1, Player player2);   
  Player whoseWinning(Player player1, Player player2);
private:
    int score;
    Player player1;
    Player player2;
};
#include "Player.hpp"

int Player::handTotal(){
    return Player::arr[0].getValue() + Player::arr[1].getValue();    
}


void Player::drawCard(Card c){
    Player::arr[0]= c;
    Player::arr[1] = c;
}


    


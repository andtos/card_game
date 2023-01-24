#include "Player.hpp"
#include <iostream>

Player::Player(){
    Card c(-1, "empty");
    Card arr[2];
    arr[0]= c;
    arr[1] = c;
}
int Player::handTotal(){
    return Player::arr[0].getValue() + Player::arr[1].getValue();    
}


void Player::drawCard(Card c){
    
    if(Player::arr[0].isNull() == 0){
        Player::arr[0]= c;
    }
    else{
        Player::arr[1] = c;
    }
    std::cout << Player::arr[0].getValue() << " draw \n";
}

Card Player::getHand1(){
   
    return Player::arr[0];
}
Card Player::getHand2(){
    return Player::arr[1];
}


    


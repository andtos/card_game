#include "Player.hpp"

Player::Player(){
    Card c(-1, "empty");
    Card arr[2];
    arr[0]= c;
    
    arr[1] = c;
}
int Player::handTotal(){
    return arr[0].getValue() + arr[1].getValue();    
}


void Player::drawCard(Card c){
    
    if(arr[0].isNull() == 1){
        arr[0]= c;
       
    }
    else{
        arr[1] = c;

    }
    
}

Card Player::getHand1(){
   
    return arr[0];
}
Card Player::getHand2(){
    return arr[1];
}


    


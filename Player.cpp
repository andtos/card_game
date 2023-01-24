#include "Player.hpp"

Player::Player(){

}
int Player::handTotal(){
    int sum = 0;
    for (auto i = hand.begin(); i != hand.end(); i++){
        sum += i->getValue();
    }
    return sum; 
}

void Player::drawCard(Card c){

    hand.push_back(c);

}

void Player::getHand(){
    for (auto i = hand.begin(); i != hand.end(); i++){
        std::cout << i->getValue() << " " << i->getSuit() << std::endl; 
    }
}


    


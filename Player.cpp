#include "Player.hpp"

Player::Player(){

}
int Player::handTotal(){
    int sum = 0;
    int aces = 0;
    for (auto i = hand.begin(); i != hand.end(); i++){
        if (i->getValue() == 1) {
            sum += 11;
            aces += 1;
            continue;
        }
        else if(i->getValue() == 11 || i->getValue() == 12 || i->getValue() == 13) {
            sum += 10;
            continue;
        }
        sum += i->getValue();
    }
    for (int a = aces; a > 0; a--) {
        if (sum > 21) {
            sum -= 10;
        }
        else if (sum == 21) {
            return sum;
        }
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


    


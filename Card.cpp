#include <string>
#include "Card.hpp"

Card::Card(){
    value = -1;
    suit = "null";
}

Card::Card(int x, std::string z){
        value = x;
        suit = z;
}


int Card::getValue(){
    return value;
}


std::string Card::getSuit(){
    return suit;
}

int Card::isNull(){
    if(Card::value == -1){
        return 1;
    }
    return 0;
}

void Card::remove(){
    Card::value = -1;
}
    

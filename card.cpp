#include <string>
#include "Card.hpp"

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
    

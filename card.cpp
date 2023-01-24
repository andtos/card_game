#include <string>
#include "card.hpp"

card::card(int x, std::string z){
        value = x;
        suit = z;
}


int card::getValue(){
    return value;
}


std::string card::getSuit(){
    return suit;
}
    

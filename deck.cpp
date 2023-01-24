#include "Deck.hpp"

deck deck::initNewDeck(){
        deck deck;
        for(int x = 0; x < 13; x++){
            card a(x, "club");
            deck.arr[x] = a;
            card b(x, "diamond");
            deck.arr[x+13] = b;
            card c(x, "hearts");
            deck.arr[x+26] = c;
            card d(x, "spade");
            deck.arr[x+39] = d;
            
        }
        return deck;
}


card deck::draw(){
    return arr[0];
}


void deck::shuffle(){
    
}
    


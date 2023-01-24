#include "Deck.hpp"
#include <random>


Deck::Deck(){
    Card arr[52];
}

Deck Deck::initNewDeck(){
        Deck deck;
        for(int x = 0; x < 13; x++){
            Card a(x+1, "club");
            deck.arr[x] = a;
            Card b(x+1, "diamond");
            deck.arr[x+13] = b;
            Card c(x+1, "hearts");
            deck.arr[x+26] = c;
            Card d(x+1, "spade");
            deck.arr[x+39] = d;
            
        }
        return deck;
}


Card Deck::draw(){
    Card c;
    for(int x = 0; x < 52; x++){
        if(arr[x].isNull() == 0){
            c = arr[x];
            arr[x].remove();
            return c;
        }
    }
    return c;
}


void Deck::shuffle(){
    
    std::srand (time(NULL));
 
    
    for (int i = 51; i > 0; i--){
        int j = rand() % (i + 1);
        Card temp = arr[i];
        arr[i] = arr[j];
        arr[j]= temp;

    }
}
    


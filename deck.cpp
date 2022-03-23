#include "deck.h"
#include <iostream>
#include <iomanip>
#include<fstream>

deck::deck(){
	
	char face[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
	char suit[4] = {'H', 'D', 'C', 'S'};
	
	for (int i = 0; i < 52; i++){
		playDeck[i].f = face[ i % 13 ];
		playDeck[i].s = suit[ i / 13 ];
	}
	
	//std::cout << playDeck[3].f;  //Good for testing that the deck fill works
}

void deck::shuffle(Card playDeck[]){
	srand( time(0) );
	for (int i = 0; i < 52; i++){
		int j = rand() % 52;
		Card temp = playDeck[ i ];
		playDeck[ i ] = playDeck[ j ];
		playDeck[ j ] = temp;
	}
	
}

deck::~deck(){
	
}
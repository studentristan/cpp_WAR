#ifndef DECK_H
#define DECK_H
#include "Card.h" //struct


//Treat the class definition as the "Main" for the deck
class deck {
	public:
		
		Card playDeck[52];
		
		deck();
		
		void shuffle(Card[]);
		
		~deck();
};

#endif
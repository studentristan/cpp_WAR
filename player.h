#ifndef PLAYER_H
#define PLAYER_H
#include "Card.h" //struct

class player {
	public:
		
		player();
		Card pDeck[26];
		void filldeck(Card[], int);
		~player();
		
	protected:
};

#endif
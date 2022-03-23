#include "player.h"
#include <iostream>
#include <iomanip>
#include<fstream>

player::player() {

}

void player::filldeck(Card playDeck[], int playerCount){ //doesn't really fill shit, just prints it lol
	int x;
	if (playerCount == 1){                               //On this line, I messed up and used = instead of ==. 45 minutes of my life GONE. I love programming. 
		std::cout << "Player deck: " << std::endl;
		for (int i = 0; i < 26; i++){
			std::cout <<  std::setw(5) << playDeck[ i ].f << " of " << playDeck[i].s << std::endl;
			pDeck[i].f = playDeck[i].f;
			pDeck[i].s = playDeck[i].s;
	}
	} else {
		std::cout << "Player deck: " << std::endl;
		for (int i = 26; i < 52; i++){
			x = i - 26;
			std::cout <<  std::setw(5) << playDeck[ i ].f << " of " << playDeck[i].s << std::endl;
			pDeck[x].f = playDeck[i].f;
			pDeck[x].s = playDeck[i].s;
	}
	}
}

player::~player() {

}
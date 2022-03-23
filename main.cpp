#include <iostream>
#include <iomanip>
#include "deck.h"
#include "player.h"
#include<fstream>


int p1, p2;
void war(Card[], Card[]);
void pointGiven(int, Card[], Card[]);

int main( ) {
	
	deck dick; //please disregard the name of the deck - by the time I had finally gotten this working, it was the only thing that could make me smile =)
	dick.shuffle(dick.playDeck);
	player playerOne;
	player playerTwo;
	playerOne.filldeck(dick.playDeck, 1);
	playerTwo.filldeck(dick.playDeck, 2);
	war(playerOne.pDeck, playerTwo.pDeck);

	return 0;
}

void war(Card playerOneCards[], Card playerTwoCards[] ){
	std::fstream dataFile("stats.txt", std::ios::out);
	if(dataFile.fail()){
		std::cout << "Error opening File..." << std::endl;
	}
	std::cout << std::endl << "WAR!!" << std::endl << std::endl;
	for (int i = 0; i < 26; i++){
		std::cout <<  std::setw(5) << playerOneCards[i].f << " of " << playerOneCards[i].s << " VS " << playerTwoCards[i].f << " of " << playerTwoCards[i].s;
		dataFile << "turn Number: " << i << std::endl << std::setw(5) << playerOneCards[i].f << " of " << playerOneCards[i].s << " VS " << playerTwoCards[i].f << " of " << playerTwoCards[i].s;
		pointGiven(i, playerOneCards, playerTwoCards);
		dataFile << std::endl << std::endl << "P1 total: " << p1 << std::endl << std::endl << "P2 total: " << p2 << std::endl << std::endl;
	}	
	std::cout << std::endl << std::endl << "P1 total: " << p1 << std::endl << std::endl << "P2 total: " << p2 << std::endl << std::endl;
}

void pointGiven(int i, Card playerOneCards[], Card playerTwoCards[]){
	int p1test, p2test;
	
	
	
	if (playerOneCards[ i ].f == 'A')
		p1test = 1;
	else if (playerOneCards[ i ].f == 'T')
		p1test = 10;
	else if (playerOneCards[ i ].f == 'J')
		p1test = 11;
	else if (playerOneCards[ i ].f == 'Q')
		p1test = 12;
	else if (playerOneCards[ i ].f == 'K')
		p1test = 13;
	else
		p1test = int(playerOneCards[ i ].f); 
		
		
	if (playerTwoCards[ i ].f == 'A')
		p2test = 1;
	else if (playerTwoCards[ i ].f == 'T')
		p2test = 10;
	else if (playerTwoCards[ i ].f == 'J')
		p2test = 11;
	else if (playerTwoCards[ i ].f == 'Q')
		p2test = 12;
	else if (playerTwoCards[ i ].f == 'K')
		p2test = 13;
	else
		p2test = int(playerTwoCards[ i ].f);	
		
		
	if (p1test > p2test){
		std::cout << "   p1 gets a point!" << std::endl;
		p1 = p1 + 1;
	} else if (p1test < p2test){
		std::cout << "   p2 gets a point!" << std::endl;
		p2 = p2 + 1;
	} else {
		std::cout << "   it's a tie! no point!" << std::endl;
	}	
}
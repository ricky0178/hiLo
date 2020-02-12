#include <iostream>

void userInput( int numberToGuess );	//prototipo funzione, la vera e propria è su main.cpp
int tries(0);						// tentativi
void compareNumber(int x, int y)	// x numero dell'utente, y numero da trovare
{
	if (x == y)
	{
		std::cout << "You WON in " << tries << " tries!";
	}
	if (x < y)
	{
		std::cout << "Too low!";
		tries = tries + 1;
		userInput(y);	// richiedi l'input da parte del giocatore, con y 
	}
	if (x > y)
	{
		std::cout << "Too high!";
		tries = tries + 1;
		userInput(y);
	}
}
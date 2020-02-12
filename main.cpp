#include <iostream>
#include <time.h>

void compareNumber(int x, int y);	// funzione prototipo
void userInput(int numberToGuess);	// funzione prototipo

int main()
{
	srand(time(0));
	int numberToGuess(rand() % 100);
	std::cout << "MADE BY RICKY IN WAY TOO MUCH TIME" << std::endl;
	std::cout << "Let's play a game! Guess the number, from 1 to 100\n";
	userInput(numberToGuess); // passa a game, così può essere ripetuta all'infinito
	return 0;
}

void userInput(int numberToGuess)				// variabile messa lì solo perchè non avrei potuto avere
{											// avere una variabile globale randomica
	std::cout << "\nGuess the number: " << std::endl;
	// std::cout << numberToGuess << "\n";		// vedere il numero solo per bug fix del numero sempre 1
	int userInput{0};
	std::cin >> userInput;
	if (userInput <= 100)
	{
		compareNumber(userInput, numberToGuess);	// compara, avendo come variabili l'input dell'user e il numero
	}												// giusto
	else
	{
		std::cout << "\n The number must be from 0 to 100!";
	}

}

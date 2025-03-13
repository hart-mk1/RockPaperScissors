// RockPaperScissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Application plays a simple game of rock, paper, scissors with the computer and user.
// User enters their choice and the computer generates a random choice.
// The winner is determined based on the choices and the result is displayed.
//
// TODO: Add a feature to allow the user to play multiple games and track wins and losses.
// TODO: Add a feature to allow the user to quit the game.
// TODO: Implement multiplayer functionality.
//

#include <iostream>

// @verifyChoice function checks if the user's choice is valid.
// Returns an integer value of 1 if the choice is invalid.
//
int verifyChoice(int userChoice) 
{
	
	if (userChoice == 1) {

		std::cout << "You chose rock!\n";

	}
	else if (userChoice == 2) {

		std::cout << "You chose paper!\n";

	}
	else if (userChoice == 3) {

		std::cout << "You chose scissors!\n";

	}
	else {

		std::cout << "Invalid choice. Please enter a valid choice (1. rock, 2. paper, or 3. scissors): \n";

		return 1;
	}
	return 0;
}

// @genComputerChoice function generates a random choice for the computer.
// Returns an integer value that represents the computer's choice.
//
int genComputerChoice()
{
	srand(time(NULL));
	int computerChoice = rand() % 3 + 1;
	
	std::cout << computerChoice << std::endl;

	if (computerChoice == 1) {

		std::cout << "The computer chose rock!\n";

	}
	else if (computerChoice == 2) {

		std::cout << "The computer chose paper!\n";

	}
	else if (computerChoice == 3) {

		std::cout << "The computer chose scissors!\n";

	}
	return computerChoice;
}

// @war function determines the winner of the game.
// Displays result of the game.
//
void war(int userChoice, int computerChoice)
{

	if (userChoice == computerChoice) {

		std::cout << "It's a tie!\n";

	}
	else if (userChoice == 1 && computerChoice == 3) {

		std::cout << "You win!\n";

	}
	else if (userChoice == 2 && computerChoice == 1) {
	
		std::cout << "You win!\n";
	
	}
	else if (userChoice == 3 && computerChoice == 2) {
	
		std::cout << "You win!\n";
	
	}
	else
	{

		std::cout << "You lose!\n";

	}

}

// @main function.
// Asks the user for their choice and verifies it in a loop. Loop breaks when a valid choice is entered.
// TODO: Add a loop to allow the user to play multiple games.
//
int main()
{

	int userChoice;
	int computerChoice;

	std::cout << "Welcome to Rock, Paper, Scissors!\n";
	std::cout << "Please enter your choice (1. rock, 2. paper, or 3. scissors): \n";

	std::cin >> userChoice;

	while (verifyChoice(userChoice) == 1)
	{

		std::cin >> userChoice;

	}

	computerChoice = genComputerChoice();

	war(userChoice, computerChoice);

    return 0;
}

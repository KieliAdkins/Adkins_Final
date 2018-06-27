// Including standard libraries
#include "stdafx.h"

// Including the header file
#include "header.h"

// // // // // 
//
// Number Guess Function
//
// // // // //
int numberGuess(string& rUserName, char& rChoice, char& rDare)
{
	// Defining the variables
	int guess;

	// Printing the information
	cout << "\nPlease enter the number you would like to guess\n\n";
	cout << "Hint: The lock code is below the number 25.\n";
	cout << "<< ";

	// Capturing player's answer
	cin >> guess;

	// While loop regarding number guesses
	while (guess != 14)
	{
		// Printing the information
		cout << "\nWrong number, please re-enter your guess.\n";
		cout << "<< ";

		// Capturing the player's answer
		cin >> guess;
	}

	// Printing the information
	cout << "\nYou have correctly guessed the lock's code and have entered the room.\n\n";
	cout << "After exploring the room, the only thing of interest is two ancient looking gold coins and a small gold key with a ribbon tied to the end.\n";

	// Calling the door result function
	initResult(rUserName, rChoice, rDare);

	cout << "You promptly pocket the coins and leave the mansion with your spoils.\n";
	cout << "You show the coins to the group, deny their share, and head home to find out what they are worth.\n";

	// Return to ensure program completion
	return 0;
}
// Including standard libraries
#include "stdafx.h"

// Including header file
#include "Header.h"

// // // // //
//
/// Game Loop
//
// // // // //

void gameLoop(string& rUserName, char& rChoice, char& rDare)
{
	// Beginning game loop
	do
	{
		// Printing the background information
		cout << "\nThe darkness surrounds you, the eerie chirp of crickets providing ambient noise against your friend's laughter.\n";
		cout << "The group of three surrounded you, the soft tap of footsteps were drowned out by the leader, Elijah, laughing loudly at a joke his girlfriend, Emma, had cracked seconds earlier.\n";
		cout << "You look to the right, where Brad walked next to you snickering to himself.\n";
		cout << "This scene was a common occurrence, the four of you walking through the streets of your tiny town far later than any store was actually open.\n";
		cout << "As you were lost in thought, looking down at your sneakers, you suddenly slam into Elijah's back, as he had stopped suddenly in front of you.\n";
		cout << "'Dude, what are you doing? Watch where you're going!' He said as he turned around suddenly. 'Sorry.' You mumbled back to him.\n";
		cout << "The entire group had stopped in front of the old 'Monetter Mansion' as they called it. The house was to say the least - creepy - and was avoided by everyone in town as there was rumors that it was haunted.\n\n";

		cout << rUserName << "! I dare you to go in there. Elijah exclaimed loudly.\n";
		cout << "You look around, trying to decide what to do.\n\n";

		cout << "Would you like to take the dare? (y/n)\n";
		cout << "<< ";

		// Capturing user input
		userInput(rUserName, rChoice, rDare);

		// Play again sequence
		cout << "\nWould you like to play again?\n";
		cout << "Enter 'q' to quit, or 'p' to play again\n";

		// Capturing user input
		userInput(rUserName, rChoice, rDare);
	}
	// Exiting the game loop
	while (rChoice != 'q');
}

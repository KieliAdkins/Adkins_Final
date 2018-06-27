// Including standard libraries
#include "stdafx.h"

// Including the header file
#include "header.h"


// // // // // 
//
// Yes Dare Function
//
// // // // //
void yesDare(string& rUserName, char& rChoice, char& rDare)
{
	// Defining variables
	char upDown;

	// Printing the story information
	cout << "\n\nYou accept the dare and slowly walk up to the front door. The battered pavement uneven beneath your feet before you step onto the front porch stairs.\n";
	cout << "You glance back at your friends, who happen to all look nervous in your stead.\n";

	cout << "Emma calls out to you, " << rUserName << " 'Are you sure about this?'\n";
	cout << "You look ahead nervously and answer with a weak affirmation as you reach for the large, elaborate door handle.\n";

	cout << "As you pull open the door, the smell of decay and mothballs hits you like a brick wall. However, you breathe out and soldier on, walking further into the creepy old mansion.\n";
	cout << "As you stand in the entryway of the manor, you ponder the decision of exploring the upstairs or the downstairs of the manor.\n\nEnter 'u' for upstairs, and 'd' for downstairs.\n";
	cout << "<< ";

	// Capturing user input
	cin >> upDown;

	// If statement regarding choice of exploring upstairs
	if (upDown == 'u')
	{
		// Printing the information
		cout << "\nYou venture carefully up the stairs, running your hand along the dusty marble banister.\n";
		cout << "After reaching the top of the stairs, you stop hesitantly...\n";
		cout << "You venture around the upstairs, exploring rooms as you go, you find one that is locked with a double digit number key lock.\n";
		cout << "\nAfter a minute of hesistation, you decide to try to open it...";

		// Calling the number guess function
		numberGuess(rUserName, rChoice, rDare);

		// Play again sequence
		cout << "\nWould you like to play again?\n";
		cout << "Enter 'q' to quit, or 'p' to play again\n";

		cout << "\n<< ";
		userInput(rUserName, rChoice, rDare);
	}

	// Else if statement regarding the choice of exploring downstairs
	else if (upDown == 'd')
	{
		// Printing the informatiom
		cout << "After exploring the downstairs of the mansion you find nothing extraordinarily interesting or creepy.\n";
		cout << "You leave the manor and head home with your friends.\n";

		cout << "Enter 'q' to quit story, or 's' to start story over.\n";
		cout << "\n<< ";

		// Calling the user input function
		userInput(rUserName, rChoice, rDare);
	}

	// Else statement regarding invalid entry
	else
	{
		// Printing the information
		cout << "Invalid entry. Please re-enter answer.\n";
		cout << "<< ";

		// Capturing user's input
		cin >> upDown;
	}


	// Return to ensure program completion
	return;
}
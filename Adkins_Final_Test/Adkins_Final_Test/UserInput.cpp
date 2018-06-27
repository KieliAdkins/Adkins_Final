// Including standard libraries
#include "stdafx.h"

// Including header file
#include "Header.h"

// // // // //
// 
/// User Input
//
// // // // // 

void userInput(string& rUserName, char& rChoice, char& rDare)
{	
	// Capturing user input
	cin >> rChoice;

	// switch statement for decisions
	switch (rChoice)
	{
		// Quitting the game
	case 'q':
		cout << "Thanks for playing!\n";
		system("pause");
		break;

		// Re-playing the game
	case 'p':
		gameLoop(rUserName, rChoice, rDare);
		break;

		// Going to instructions
	case 'h':
		instructions(rUserName);
		system("pause");
		break; 

		// Replying yes to dare
	case 'y':
		if (rDare = 'y')
		{
			// Calling functions
			yesDare(rUserName, rChoice, rDare);
			initResult(rUserName, rChoice, rDare);
		}
		break; 
		
		// No dare answer
	case 'n':
		if (rDare = 'n')
		{
			noDare();
		}
		break; 

		// Default answer
	default:
		cout << "\nSorry, but " << rChoice << "isn't a valid choice\n"; 
	}
	// Return to ensure program completion
	return;
}
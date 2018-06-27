// Including standard libraries
#include "stdafx.h"

// Including header file
#include "Header.h"

// // // // //
// 
// Golden Key Sequence
//
// // // // // 

// // // // //
// 
/// Likelihood Of Objects Function
//
// // // // // 
void likelihood()
{
	// Defining variables
	const int NUM_LIKE = 3;

	// Creating our list
	const string LIKES[NUM_LIKE] =
	{
		{ "high chance of finding an object" },
		{ "medium chance of finding an object" },
		{ "low chance of finding an object" }

	};

	// Seeding the random generator
	srand(static_cast<unsigned int>(time(0)));

	// Mixing up words
	int choice = (rand() % NUM_LIKE);

	// Picking random word
	string theLike = LIKES[choice];

	// Printing the information
	cout << "This door displays a " << theLike << ".\n\n";

	// Return to ensure program completion
	return;
}

// // // // //
// 
/// Dust Level Function
//
// // // // // 
void dustLevel()
{
	// Defining variables
	const int NUM_DUST = 3;

	// Creating our list
	const string DUSTS[NUM_DUST] =
	{
		{ "heavy amount of dust" },
		{ "medium amount of dust" },
		{ "light amount of dust" }

	};

	// Seeding the random generator
	srand(static_cast<unsigned int>(time(0)));

	// Mixing up words
	int choice = (rand() % NUM_DUST);

	// Picking random word
	string theDust = DUSTS[choice];   

	 // Printing the information
	cout << "This door displays a " << theDust << ".\n\n";

	// Return to ensure program completion
	return;
}

// // // // //
// 
/// Handle types
//
// // // // // 
void handleShape()
{
	// Defining variables
	const int NUM_HANDLES = 3; 

	// Creating our list
	const string HANDLES[NUM_HANDLES] =
	{
		{"circular shaped handle" },
		{ "rectangular shaped handle" },
		{ "diamond shaped handle" }

	};

	// Seeding the random generator
	srand(static_cast<unsigned int>(time(0)));

	// Mixing up words
	int choice = (rand() % NUM_HANDLES);

	// Picking random word
	string theHandle = HANDLES[choice];

	// Printing the information
	cout << "This door displays a " << theHandle << ".\n\n";

	// Return to ensure program completion
	return;
}

// // // // //
// 
/// Door entry function
//
// // // // // 
void doorEntry(string& rUserName, char& rChoice, char& rDare)
{
	// Seeding the random generator
	srand(static_cast<unsigned int>(time(0)));

	// Generating random number
	int randomNumber = rand(); 

	// Getting number between 1 and 20
	int likely = (randomNumber % 20) + 1; 

	if (likely > 15)
	{
		extDifficult(rUserName, rChoice, rDare);
	}

	else if (likely > 10)
	{
		modDifficult(rUserName, rChoice, rDare);
	}

	else if (likely > 5)
	{
		modEasy( rUserName, rChoice, rDare);
	}

	else
	{
		extEasy(rUserName, rChoice, rDare);
	}
}

// // // // //
// 
/// Displaying the details of the door
//
// // // // // 
void doorDetails()
{
	// Printing all information
	likelihood(); 
	dustLevel(); 
	handleShape();  

	// Return to ensure program completion
	return;
}

// // // // //
// 
/// Initiating results
//
// // // // // 
int initResult(string& rUserName, char& rChoice, char& rDare)
{
	// Declaring variables
	int decide;
	char open;

	// Printing the information
	cout << "\nLooking down the hallway you see four doors.\n You can decide to either try to open one with the key or leave the house with your spoils - and body - intact.\n";

	// Printing the user's choices
		cout << "0 - Leave the manor\n";
		cout << "1 - Look at door 1\n";
		cout << "2 - Look at door 2\n";
		cout << "3 - Look at door 3\n";
		cout << "4 - Look at door 4\n";
		cout << "What would you like to do?\n";
		cout << "<< ";
		// Capturing user information
		cin >> decide;

		// Switch statement regarding user entry
		switch (decide)
		{
			// Case one - to exit
		case 0:
			// Printing the information
			cout << "Thanks for playing!\n";

			break;

			//  Looking at a door
		case 1:
			// Printing the information
			cout << "\nThis is the details of door #1.\n";

			// Calling the door details function
			doorDetails();

			// Printing the information
			cout << "Would you like to open this door? (y/n)";
			cout << "\n<< ";

			// Capturing player's input
			cin >> open; 

			// If statement about opening door
			if (open = 'y')
			{
				// Calling the door entry function
				doorEntry(rUserName, rChoice, rDare);
			}

			// Else statement aboout going to menu
			else
			{
				// Calling the user input function
				userInput(rUserName, rChoice, rDare);
			}
			break;

			//  Looking at a door
		case 2:
			// Printing the information
			cout << "\nThis is the details of door #2.\n";

			// Calling the door details function
			doorDetails();

			// Printing the information
			cout << "Would you like to open this door? (y/n)";
			cout << "\n<< ";

			// Capturing player's input
			cin >> open;

			// If statement about opening door
			if (open = 'y')
			{
				// Calling the door entry function
				doorEntry(rUserName, rChoice, rDare);
			}

			// Else statement aboout going to menu
			else
			{
				// Calling the user input function
				userInput(rUserName, rChoice, rDare);
			}
			break;
		
			//  Looking at a door
		case 3:
			// Printing the information
			cout << "\nThis is the details of door #3.\n";

			// Calling the door details function
			doorDetails();

			// Printing the information
			cout << "Would you like to open this door? (y/n)";
			cout << "\n<< ";

			// Capturing player's input
			cin >> open;

			// If statement about opening door
			if (open = 'y')
			{
				// Calling the door entry function
				doorEntry(rUserName, rChoice, rDare);
			}

			// Else statement aboout going to menu
			else
			{
				// Calling the user input function
				userInput(rUserName, rChoice, rDare);
			}
			break;

			//  Looking at a door
		case 4:
			// Printing the information
			cout << "\nThis is the details of door #4.\n";

			// Calling the door details function
			doorDetails();

			// Printing the information
			cout << "Would you like to open this door? (y/n)";
			cout << "\n<< ";

			// Capturing player's input
			cin >> open;

			// If statement about opening door
			if (open = 'y')
			{
				// Calling the door entry function
				doorEntry(rUserName, rChoice, rDare);
			}

			// Else statement aboout going to menu
			else
			{
				// Calling the user input function
				userInput(rUserName, rChoice, rDare);
			}
			break;
		}

	// Return to ensure program completion
	return 0;
}
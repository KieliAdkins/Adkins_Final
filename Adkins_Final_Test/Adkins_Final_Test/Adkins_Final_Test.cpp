/*
Final Project: Interactiv Fiction
Kieli Adkins
CSC215
June 24, 2018
*/

// // // // //
// 
// Including and Declaring Needed Information
//
// // // // // 

// Including standard libraries
#include "stdafx.h"

// Including header file
#include "Header.h"

// // // // //
// 
/// Main Function
//
// // // // // 

int main()
{
	// // // // //
	// Capturing user's name
	// // // // //

	// Defining variable for user's name
	string userName;

	// Creating a reference to players name
	string& rUserName = userName;

	// Defining variable for player's choice
	char choice;

	// Creating a reference to players choice
	char& rChoice = choice;

	// Defining a variable for dare player choice
	char dare;

	// Creating a reference to players dare
	char& rDare = dare;

	// Printing information to capture user's name
	cout << "Please enter your name: ";

	// Capturing user's name
	cin >> userName;

	// // // // //
	// Instructions
	// // // // //

	// Calling instructions function
	instructions(rUserName);

	// // // // //
	// Game Loop
	// // // // //
	
	// Calling game loop
	gameLoop(rUserName, rChoice, rDare);

	// Returning to ensure program completion
    return 0;
}




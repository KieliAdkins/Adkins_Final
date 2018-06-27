// Including standard libraries
#include "stdafx.h"

// Including header file
#include "Header.h"

// // // // //
// 
/// Instructions
//
// // // // // 

void instructions(string& rUserName)
{
	// // // // //
	// Welcome Sequence
	// // // // // 

	// Printing the welcome information 
	cout << "\nHello " << rUserName << ", welcome to the Monetter Mansion.\n";
	cout << "We hope you enjoy your stay...\n";

	// Printing the information
	cout << "\nWelcome to the interactive fiction story of the Monetter Mansion.\n";
	cout << "Follow the story prompts and enter your desired answer, depending on your answer you can explore many paths within the story.\n";
	cout << "If you, at any time, would like to refer back to the instructions enter 'h' at any decision input.\n";
	cout << "If you, at any time, would like to restart the interactive story enter 'p' at any decision input.\n";
	cout << "If you, at any time, would like to quit the interactive story enter 'q' at any decision input.\n";
	cout << "Good luck on your adventure!\n";

	// Return to ensure program completion
	return; 
}
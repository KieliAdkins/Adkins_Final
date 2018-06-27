// Including standard libraries
#include "stdafx.h"

// Including header file
#include "Header.h"

// // // // //
// 
/// Door Results
//
// // // // // 

/// Extremely Difficult Function
void extDifficult(string& rUserName, char& rChoice, char& rDare)
{
	// Printing the information
	cout << "You reach tentatively towards the handle and attempt to put the key in.\n";
	cout << "The key fits, but the door appears to be jammed.\n";
	cout << "After a short stint of jiggling and shoving, the door flies open dramatically stirring a cloud of dust in its wake.\n";
	cout << "As you step into the room, a dark shadow resembling a living being stands still on the other side of the room.\n"; 
	
	// Calling enemy function 
	boss();

	// Printing the information
	cout << "Congratulations! You have defeated the wraith.\n";
	cout << "After killing the wraith, you hurriedly leave the mansion.\n";
	cout << "You immediately tell your friends about your encounter - however, none of them believe you.\n";
	cout << "Whatever, you know what happened anyway...\n";

	// Return to ensure program completion
	return;
}

/// Moderately Difficult Function
void modDifficult(string& rUserName, char& rChoice, char& rDare)
{
	// Declaring variables
	char explore;

	// Printing the information
	cout << "You reach tentatively towards the handle and attempt to put the key in.\n";
	cout << "Success! The key works and opens the door for you.\n";
	cout << "As you step into the room, the door on the armoire trembles.\n";
	cout << "You peg it as paranoia and begin to look through the nightstand.\n";
	cout << "Around the room there are three objects of interests:  the armoire ('a'), the nightstand ('b'), or the dresser. ('c')\n";
	cout << "Which would you like to explore first?\n";
	cout << "<< ";

	// Capturing player input
	cin >> explore;

	// Switch statement for user answers
	switch (explore)
	{
		// Looking through the armoire
	case 'a':
		// Printing the information
		cout << "The armoire was massive; easily standing 6' tall and 5' wide.\n";
		cout << "As you draw closer to the armoire you notice that the door was slowly being pushed open.\n";
		cout << "'Eh. Probably just the wind', you say as you shrug.\n";
		cout << "Grabbing the handles you fling the armoire doors open.\n";
		cout << "To your surprise, a zombie stumbles out at you.\n";
		
		// Calling enemy function 
		enemies();

		// Printing the information
		cout << "Congratulations! You have killed the zombie.\n";
		cout << "After killing the zombie, you hurriedly leave the mansion.\n";
		cout << "You immediately tell your friends about your encounter - however, none of them believe you.\n";
		cout << "Whatever, you know what happened anyway...\n";
		system("pause");

		break;

		// Looking through the nightstand
	case 'b':
		// Printing the information
		cout << "As you shuffle over to the old wooden nightstand, you look around at the sad remains of the once great manor. \n";
		cout << "After reaching the nightstand, you pull open the drawer, causing the nightstand to shake and tip the lamp atop it precariously.\n";
		cout << "The top drawer contains an old revolver, the handle displayed delicately carved initials of 'M.M.'.\n";
		cout << "You decide to leave the revolver in its final resting place, as it doesn't feel right to take it from its home.\n";
		cout << "After leaving the only treasure you have found, you exit the manor. Rejoinging your friends, and making your way back home.\n";
		system("pause");
		break;

		// Looking through the dresser
	case 'c':
		// Printing the information
		cout << "You walk carefully over to the dresser.\n";
		cout << "The wood has began to warp and peel, ruining the once elegant piece of furniture.\n";
		cout << "Looking through the drawers comes up with only three things of interests: an old Bible, a delicately rolled scroll of paper, and the silver chain for a necklace.\n";
		cout << "Determined to see if it is worth anything you pocket the chain, place the Bible back in its drawer, and try to carefully unroll the scroll.\n";
		cout << "However, the paper is just too brittle and you decide to leave it within the drawer.\n";
		cout << "After gaining a treasure, you exit the manor. Rejoinging your friends, and making your way back home.\n";
		system("pause");
		break;

		// Default
	default:
		userInput(rUserName, rChoice, rDare);
		break;
	}

	// Return to ensure program completion
	return;
}

/// Moderately Easy Function
void modEasy(string& rUserName, char& rChoice, char& rDare)
{
	// Declaring variables
	char explore; 
	char take; 

	// Printing the information
	cout << "You reach tentatively towards the handle and attempt to put the key in.\n";
	cout << "The key fits, but the door appears to be jammed.\n";
	cout << "After a short stint of jiggling and shoving, the door flies open dramatically stirring a cloud of dust in its wake.\n";
	cout << "You venture into the dusty old bedroom, looking around for valuable treasures.\n";
	cout << "Around the room there are three objects of interests:  the armoire ('a'), the nightstand ('b'), or the dresser. ('c')\n"; 
	cout << "Which would you like to explore first?\n";
	cout << "<< "; 

	// Capturing player input
	cin >> explore; 

	// Switch statement for user answers
	switch (explore)
	{
		// Looking through the armoire
	case 'a':
		cout << "The armoire was massive; easily standing 6' tall and 5' wide.\n";
		cout << "As you pull open the doors, you get a nice shower of dust.\n";
		cout << "There is a few pieces of clothing hanging in the armoire, but nothing that hasn't been eaten, torn, or otherwise ruined by the passage of time.\n";
		cout << "Heavily disappointed at the lack of findings, you leave the manor. Rejoinging your friends, and making your way back home.\n";
		system("pause");
		break;

		// Looking through the nightstand
	case 'b':
		cout << "You shuffle over to the old wooden nightstand, you look around at the sad remains of the once great manor. \n";
		cout << "After reaching the nightstand, you pull open the drawer, causing the nightstand to shake and tip the lamp atop it precariously.\n";
		cout << "The top drawer is empty, but as you continue your search you find an old family photo of the Monetter family, all smiling triumphantly as they sat in a beautiful horse-drawn carriage.\n";
		cout << "Underneath the picture is a small gold coin, it's not any type of currency you have ever seen before, so you quickly put it in your pocket.\n";
		cout << "After gaining a treasure, you exit the manor. Rejoinging your friends, and making your way back home.\n";
		system("pause");
		break;

		// Looking through the dresser
	case 'c':
		cout << "You walk carefully over to the dresser.\n";
		cout << "The wood has began to warp and peel, ruining the once elegant piece of furniture.\n";
		cout << "Looking through the drawers comes up with only three things of interests: an old Bible, an old, dull dagger, and the silver chain for a necklace.\n";
		cout << "Determined to see if it is worth anything you pocket the chain, place the Bible back in its drawer, and ponder if you should take the dagger or not.\n";
		cout << "You decide to leave the dagger where it is, after all you feel it is disrespectful to remove it from where it has sat for this many years.\n";
		cout << "After gaining a treasure, you exit the manor. Rejoinging your friends, and making your way back home.\n";
		system("pause");
		break;

		// Default
	default:
		userInput(rUserName, rChoice, rDare);
		break;
	}
	// Return to ensure program completion
	return;
}

/// Easy Function
void extEasy(string& rUserName, char& rChoice, char& rDare)
{
	// Declaring variables
	char explore;

	// Printing the information
	cout << "You reach tentatively towards the handle and attempt to put the key in.\n";
	cout << "Success! The key works and opens the door for you.\n";
	cout << "You venture into the dusty old bedroom, looking around for valuable treasures.\n";
	cout << "Around the room there are three objects of interests:  the armoire ('a'), the nightstand ('b'), or the dresser. ('c')\n";
	cout << "Which would you like to explore first?\n";
	cout << "<< ";

	// Capturing player input
	cin >> explore;

	// Switch statement for user answers
	switch (explore)
	{
		// Looking through the armoire
	case 'a':
		cout << "The armoire was massive; easily standing 6' tall and 5' wide.\n";
		cout << "As you pull open the doors, you get a nice shower of dust.\n";
		cout << "To your dissapointment there isn't anything but spiderwebs and mothballs in the armoire.\n";
		cout << "After getting over your disappointment, you exit the manor, rejoin your friends, and making your way back home.\n";
		system("pause");
		break;

		// Looking through the nightstand
	case 'b':
		cout << "You shuffle over to the old wooden nightstand, you look around at the sad remains of the once great manor. \n";
		cout << "After reaching the nightstand, you pull open the drawer, causing the nightstand to shake and tip the lamp atop it precariously.\n";
		cout << "The top drawer is empty, but as you continue your search you find an old family photo of the Monetter family, all smiling triumphantly as they sat in a beautiful horse-drawn carriage.\n";
		cout << "Upon turning the picture over you find a sequence of numbers and letters, seemingly random, scrawled in shaky handwriting.\n";

		cout << "The handwriting displayed "; 
		backPicture(); 

		cout << "The picture makes you feel sad for the decaying state of the mansion and the inhabitants that once called it home.\n";
		cout << "After feeling a deep sadness for the family, you exit the manor. You rejoin your friends, and making your way back home.\n";
		system("pause");
		break;

		// Looking through the dresser
	case 'c':
		cout << "You walk carefully over to the dresser.\n";
		cout << "The wood has began to warp and peel, ruining the once elegant piece of furniture.\n";
		cout << "Looking through the drawers comes up with only two things of interests: an old Bible, and the silver chain for a necklace.\n";
		cout << "Determined to see if it is worth anything you pocket the chain, and place the Bible back in its drawer.\n";
		cout << "After gaining a treasure, you exit the manor. Rejoining your friends, and making your way back home.\n";
		system("pause");
		break;

		// Default
	default:
		userInput(rUserName, rChoice, rDare);
		break;
	}

	// Return to ensure program completion
	return;
}

void backPicture()
{
	int x = 5; 

	int *p; 

	p = &x;

	cout << &x << endl; 

	//// Declaring a pointer
	//int* pAPointer;

	//int* pAddress = 0;

	//int address = 10; 

	//// Assigning pointer address to variable score
	//pAddress = &address; 

	// Return to ensure program completion
	return;
}

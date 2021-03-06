/*
Interactive Fiction
Kieli Adkins
CSC215
June 5, 2018
*/

// // // // //
// 
// Including and Declaring Needed Information
// 
// // // // //

// Including standard libraries
#include "stdafx.h"
#include <iostream>
#include <string>

// Including std namespace
using namespace std;

// Declaring functions
void instructions();
void yesDare(string userName);
void noDare();
int numberGuess();

// Defining global variables
const string userName;

// // // // //
// 
// Main function
// 
// // // // //

int main(string userName)
{
	// Defining play again variable
	char playAgain;

	// Beginning the game loop
	do
	{
		// Defining variables
		char dare; 

		// // // // //
		// Instructions
		// // // // //
		instructions();

		// // // // //
		// Welcome Sequence
		// // // // // 
		// Capturing user's name
		cout << "Please enter your name: ";

		// Capturing user's name
		cin >> userName;

		// Printing the welcome information 
		cout << "\nHello " << userName << ", welcome to the Monetter Mansion.\n";
		cout << "We hope you enjoy your stay...\n";

		// // // // //
		// Beginning of Story
		// // // // //
		// Printing the background information
		cout << "\nThe darkness surrounds you, the eerie chirp of crickets providing ambient noise against your friend's laughter.\n";
		cout << "The group of three surrounded you, the soft tap of footsteps were drowned out by the leader, Elijah, laughing loudly at a joke his girlfriend, Emma, had cracked seconds earlier.\n";
		cout << "You look to the right, where Brad walked next to you snickering to himself.\n";
		cout << "This scene was a common occurrence, the four of you walking through the streets of your tiny town far later than any store was actually open.\n";
		cout << "As you were lost in thought, looking down at your sneakers, you suddenly slam into Elijah's back, as he had stopped suddenly in front of you.\n";
		cout << "'Dude, what are you doing? Watch where you're going!' He said as he turned around suddenly. 'Sorry.' You mumbled back to him.\n";
		cout << "The entire group had stopped in front of the old 'Monetter Mansion' as they called it. The house was to say the least - creepy - and was avoided by everyone in town as there was rumors that it was haunted.\n\n";

		cout << userName << "! I dare you to go in there. Elijah exclaimed loudly.\n";
		cout << "You look around, trying to decide what to do.\n\n";

		cout << "Would you like to take the dare? (y/n)\n";
		cout << "<< ";

		// Capturing user input
		cin >> dare; 

		// If statement for dare decision
		if (dare == 'n')
		{
			// Calling no dare function
			noDare();
		}
		
		// Else if statement for dare decision
		else if (dare == 'y')
		{
			// Calling yes dare function
			yesDare(userName);
		}

		// Else statement if answer is invalid
		else
		{
			cout << "Invalid entry. Please re-enter answer.\n";
		}

		// Printing the information
		cout << "\nWould you like to play again? Enter 'n' for no, and any other key for yes.\n";

		// Capturing play again variable
		cin >> playAgain;
	}
	// Exiting the game loop
	while (playAgain != 'n');

	// Return to ensure program completion
    return 0;
}

// // // // //
//
// Instructions
//
// // // // //
void instructions()
{
	// Printing the information
	cout << "\nWelcome to the interactive fiction story of Monetter Mansion.\n";
	cout << "Follow the story prompts and enter your desired answer.\n";
	cout << "Good luck on your adventure!\n";
}

// // // // // 
//
// No Dare Function
//
// // // // //
void noDare()
{
	// Printing the information
	cout << "\n'Nah, I'd rather not.' You reply to the group.\n";
	cout << "'Chicken!' Elijah calls out, clearly egging the group on.\nLuckily, Emma spoke up, arguing that it was your choice and was unfair to force you to enter the house.\n";
	cout << "Elijah mutters to himself and turns and begins to walk away, the group tentatively follows.\n";
	cout << "Your story is complete, please begin again to try a different path.\n";

	// Return to ensure program completion
	return;
}

// // // // // 
//
// Yes Dare Function
//
// // // // //
void yesDare(string userName)
{
	// Defining variables
	char upDown;

	// Printing the story information
	cout << "\n\nYou accept the dare and slowly walk up to the front door. The battered pavement uneven beneath your feet before you step onto the front porch stairs.\n";
	cout << "You glance back at your friends, who happen to all look nervous in your stead.\n";

	cout << "Emma calls out to you," << userName << "'Are you sure about this?'\n";
	cout << "You look ahead nervously and answer with a weak affirmation as you reach for the large, elaborate door handle.\n";

	cout << "As you pull open the door, the smell of decay and mothballs hits you like a brick wall. However, you breathe out and soldier on, walking further into the creepy old mansion.\n";
	cout << "As you stand in the entryway of the manor, you ponder the decision of exploring the upstairs or the downstairs of the manor.\nEnter 'u' for upstairs, and 'd' for downstairs.\n";
	cout << "<< ";

	// Capturing user input
	cin >> upDown;

	// If statement regarding choice of exploring upstairs
	if (upDown == 'u')
	{
		// Printing the information
		cout << "You venture carefully up the stairs, running your hand along the dusty marble banister.\n";
		cout << "After reaching the top of the stairs, you stop hesitantly...\n";
		cout << "You venture around the upstairs, exploring rooms as you go, you find one that is locked with a double digit number key lock.\n";
		cout << "After a minute of hesistation, you decide to try to open it...";

		// Calling the number guess function
		numberGuess();
	}

	// Else if statement regarding the choice of exploring downstairs
	else if (upDown == 'd')
	{
		// Printing the informatiom
		cout << "After exploring the downstairs of the mansion you find nothing extraordinarily interesting or creepy.\n";
		cout << "You leave the manor and head home with your friends.\n";
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

// // // // // 
//
// Number Guess Function
//
// // // // //
int numberGuess()
{
	// Defining the variables
	int guess; 

	// Printing the information
	cout << "\nPlease enter the number you would like to guess\n";
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
	cout << "You have correctly guessed the lock's code and have entered the room.\n";
	cout << "After exploring the room, the only thing of interest is two ancient looking gold coins.\n";
	cout << "You promptly pocket the coins and leave the mansion with your spoils.\n";
	cout << "You show the coins to the group, deny their share, and head home to find out what they are worth.";

	// Return to ensure program completion
	return 0; 
}
// Paper Rock Scissor.cpp : Defines the entry point for the console application.
// Author: Adam Browning.
// version: Classified.
// purpose: To allow the user to play paper rock scissors while their supervisor is not looking.

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

//function prototypes.
int getuserChoice(); // function for getting the users choice.
int contOrQuit();//function for quiting or continuing
int playGame(int compChoice, int userChoice);//fuction for playing the game.
int winner(int result);//Function for winner
int playMatch(int playerGame, int compGame);//function for playing a match.


int main()
{
	bool keepPlaying = false;//boolean for if the player wishes to keep playing.
	int result;//declared variable for the results of the end of the game.
	int userCompGame = 0;//declared variable for games.
	int userCompMatches = 0;//declared variable for matches.
	int userMatches = 0;//declared variable for user matches won.
	int compMatches = 0;//declared variable for computer matches won.
	int userGames = 0;//declared variable for games user won.
	int compGames = 0;//declared variable for games the computer won.
	//while statement for if user decides to keep playing.
	while (!keepPlaying) {
		int compChoice;//declared variable for computers choice.
		int userChoice;//declared variable for users choice.

		compChoice = rand() % 3;//random number generator for computers choice, picking 0 to 2
		userChoice = getuserChoice();//pulls function getuserChoice.

		result = playGame(compChoice, userChoice);//results that pulls from playgame function.

		userCompGame = winner(result);//game result pulled from winner function with result.
		//if the game has the user winning. user game win is stored.
		if (userCompGame == 1) {
			userGames++;//adds one to users game wins.

			cout << "You have won " << userGames << " games. \n";//Print statement showing how many the user has won.
		}
		//else if the game has the user losing
		else if (userCompGame == -1) {
			compGames++;//adds one to the amount of games the computer has one.
			cout << "The cylon has won " << compGames << " games.\n";

		}
		//print statement if results end up in a tie.
		else {
			cout << "No one has yet to win a game. sad panda.\n";

		}
		//if statement for either the user or the computer has won 2 games.
		if ((userGames == 2) || (compGames == 2)) {
			userGames = 0;
			compGames = 0;

			userCompMatches = playMatch(userGames, compGames);


			

		}
		//if statement for matches.
		if (userCompMatches == 1) {

			userMatches++;//adds one to how many matches the user has won
			cout << "User has won " << userMatches << " mathces.\n"; //print statement.

		}
		//else if statement if computer wins a match
		else if (userCompMatches == -1) {
			compMatches++;//adds one to computer matches won
			cout << "The droids have won " << compMatches << " matches.\n";//print statement for computer winning.


		}
		keepPlaying = contOrQuit();//keepPlaying being pulled from contOrQuit function allowing the user to continue playing

	}
	



    return 0;
}
//function getting a users choice.
int getuserChoice() {
	
	int userChoice;//declared variable for users choice.

	cout << "0.  Rock.\n";//giving user information on what to type for rock
	cout << "1.  paper.\n";//giving user information on what to type for paper.
	cout << "2.  scissor.\n";//giving user information on what to type for scissor
	
	cout << "Please enter one of the numbers above to pick your answers: ";//asking the user to pick what they want.
	cin >> userChoice;//stored as user choice

	return userChoice; //returns user choice.
}
//function for playing the game.
int playGame(int compChoice, int userChoice) {
	//if statement if the computer picks 0
	if (compChoice == 0) {
		cout << "computer chooses rock. \n";//print statement showing computer picks rock from picking zero
			//if user picks zero.
			if (userChoice == 0) {
				cout << "You picked Rock. It is a Tie.\n";//statement if user picks rock.
				return 0;//returns a zero
			}
			//if user picks 1
			else if (userChoice == 1) {
				cout << "You picked paper. Paper cover rock, you win.\n";//print statement for users pick
				return 1;//returns a one
			}
			//if user picks a 2
			else if (userChoice == 2) {
				cout << "you picked sciccors. They are bent by rock. The computer wins.\n";//print statement for if user picks scissors.
				return -1;//returns a negative.

			}
	}
	//if the computer picks one
	if (compChoice == 1) {
		cout << "computer picks paper. \n";//print statement showing what computer picks
		//if the user picks zero.
		if (userChoice == 0) {
			cout << "You picked rock. Paper covers rock. You lose. \n";//print statement showing the result.
			return -1;//returns a negative one.
		}
		//if the users choice it 1
		else if (userChoice == 1) {
			cout << "you picked paper. It is a tie.\n";//print statement showing result.
			return 0;//returns a zero because no one won.

		}
		//if the user picks 2
		else if (userChoice == 2) {
			cout << "you picked scissors. Scissors shreds paper. You win.\n";//print statement if user picks 2
			return 1;//returns a one because the user won.

		}
	
	}
	//if computer picks 2
	if (compChoice == 2) {
		cout << "Computer picks scissors. \n";//print statement showing what computer has picked
		//if user picks zero
		if (userChoice == 0) {
			cout << "You picked rock. Rock smashes scissors. You win.\n";//print statement showing what the user picked.
			return 1;//returns a one because user won

		}
		//if user picks to
		else if (userChoice == 1) {
			cout << "You picked paper. Scissors cuts paper. Computer wins, you lose. \n";//statement showing what use picked
			return -1;//returns a -1 because computer won.
		}
		//if the user picks a 2
		else if (userChoice == 2) {
			cout << "You picked scissors as well. It is a tie.\n";//statement showing the result of a tie.
			return 0;//returns a zero because no one won.
		}
	}
}
//fuction for finding the winner.
int winner(int result) {
	//if there is a 1 will add a win for the user
	if (result == 1) {
		return 1;//returns a one storing users win


	}
	//a negative 1 is return from playgame fuction.
	else if (result == -1) {
		return -1;//returns a -1 storing a computer win


	}
	else
		return 0;//if tie, returns a zero storing nothing.
}
//function for playing a match.
int playMatch(int playerGame, int compGame) {
	//if the player wins 2 games.
	if (playerGame == 2) {
		return 1;//returns a 1 and stores a match one to the player
	}
	//else if the computer wins 2 two gamse.
	else if (compGame == 2) {
		return -1;//returns a -1 and stores a match won for the computer.
	}
}
//function for is the user wishes to continue.
int contOrQuit() {
	int cont;//declared variable users choice
	int keepPlaying;//declared variable for users pick if the wish to keep playing

	cout << "Would you like to go again? please enter a 0 to continue to play again and a 1 to quit:  ";//asking what user wants to do.
	cin >> cont;//stores user choice.
	//if user picks 1
	if (cont == 1) {

		keepPlaying = true;//keep playing is returned as true
		return keepPlaying;//returns the coice

	}
	//else program ends.
	else {
		return 0;
	}


}
	


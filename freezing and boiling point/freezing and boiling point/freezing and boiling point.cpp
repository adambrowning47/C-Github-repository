// freezing and boiling point.cpp : Defines the entry point for the console application.
//
/*
Author: Adam Browning
version: 1.0
Date: 11/14/2017
purpose: The perpose of this program is to give an answer on is a substance is boiling, no change or is freezing based on user input.





*/

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	
	int temp; //declared variable for user input.
	char choice = 'Y'; //declared variable for loop function.

	//brief discription for the user on what the program is for.
	cout << "This Program compares the temperature in fahrenheit that the user enters \n"
		<< "compares it with the following table, and shows all the substances \n"
		<< "that will freeze and boil at that temperature.\n";


	cout << "\n"; //line break

	//While statement for the loop function.
	while (choice == 'y' || choice == 'Y') {
		cout << "Please enter a temputature in fahrenheit: ";//user inputs a tempurature.
		cin >> temp;

		cout << "\n";

		// table for user to see what the boiling and freezing point of the substances are.
		cout << "SUBSTANCE" << setw(50) << "FREEZING POINT (F)" << setw(50) << "BOILING POINT (F)\n" //table heading
			<< "____________________________________________________________________________________________________________\n" //line between heading
			<< "Ethyl Alcohol" << setw(41) << "-173 Degrees" << setw(52) << "172 Degrees \n" //table for Ethyl Alcohol
			<< "Mercury" << setw(46) << "-38 Degrees" << setw(53) << "676 Degrees \n" //table for mercury
			<< "Oxygen" << setw(48) << "-362 Degrees" << setw(52) << "-306 Degrees \n" //table for exygen
			<< "Water" << setw(48) << "32 Degrees" << setw(53) << "212 Degrees \n"; //table for water

		cout << "\n"; // line break

		cout << "when the temperature is " << temp << " degrees\n"; //line that displays the users temperature

		cout << "\n"; //line break.

		//if statement for Ethyl Alcohol.
		if (temp <= -173) {
			cout << "Ethyl Alcohol " << setw(20) << " freezes\n"; //if user inputs anything equal or less than -173 will display freezing.
		}
		else if (temp >= -172 && temp <= 171) {
			cout << "Ethyl Alcohol " << setw(20) << " No Change!\n"; //will deplay if user inputs anything between -172 and 171
		}
		else if (temp >= 172) {
			cout << "Ethyl alcohol " << setw(20) << " Boils!\n"; //will display if user input anything greater than 172
		}

		cout << "\n"; //line break

		//if statement for mercury
		if (temp <= -38) {
			cout << "mercury " << setw(26) << " Freezes!\n"; //will display if user input anything less than -38
		}
		else if (temp >= -37 && temp <= 675) {
			cout << "mercury " << setw(26) << " No Change!\n"; //will display if user input anything between -37 and 675
		}
		else if (temp >= 676) {
			cout << "mercury " << setw(26) << "Boils!\n"; //will display if user input anything greater than 676
		}

		cout << "\n";

		if (temp <= -362) {
			cout << "Oxygen " << setw(27) << " freezes!\n"; //will display if user input anything less than 172
		}
		else if (temp >= -361 && temp <= -305) {
			cout << "oxygen " << setw(27) << " No Change\n"; //will display if user input anything between -361 and -305
		}
		else if (temp >= -306) {
			cout << "oxygen " << setw(27) << " Boils!\n"; //will display if user input anything greater than -306
		}

		cout << "\n";

		if (temp <= 32) {
			cout << "water " << setw(28) << " freezes!\n"; //will display if user input anything less than 32
		}
		else if (temp >= 33 && temp <= 211) {
			cout << "water " << setw(28) << " No Change!\n"; //will display if user input anything between 33 and 211
		}
		else if (temp >= 212) {
			cout << "water " << setw(28) << " Boils!\n"; //will display if user input anything greater than 212
		}

		cout << "\n"; //line break


		cout << "  summery: \n"; //end summery

		//if statement reiterating previous if statements
		if (temp <= -173) {
			cout << "At this tempurature Ethyl Alcohol will freeze!\n"; //will reiterate that substance will freeze
		}
		else if (temp >= -172 && temp <= 171) {
			cout << "At this temperature nothing will happen to the contents of Ethyl Alcohol!\n"; //will reiterate that substance will stay constant
		}
		else if (temp >= 172) {
			cout << "At this Temperature Ethyl Alcohol will Boil!\n"; //will reiterate that substance will boil
		}


		if (temp <= -38) {
			cout << "At this tempurature Mercury will freeze!\n"; //will reiterate that substance will freeze
		}
		else if (temp >= -37 && temp <= 675) {
			cout << "At this temperature nothing will happen to the contents of Mercury!\n"; //will reiterate that substance will stay constant
		}
		else if (temp >= 676) {
			cout << "At this Temperature Mercury will Boil!\n"; //will reiterate that substance will boil
		}


		if (temp <= -362) {
			cout << "At this tempurature Oxygen will freeze!\n"; //will reiterate that substance will freeze
		}
		else if (temp >= -361 && temp <= -305) {
			cout << "At this temperature nothing will happen to the contents of Oxygen!\n"; //will reiterate that substance will stay constant
		}
		else if (temp >= -306) {
			cout << "At this Temperature Oxygen will Boil!\n"; //will reiterate that substance will boil
		}



		if (temp <= 32) {
			cout << "At this tempurature Water will freeze!\n"; //will reiterate that substance will freeze
		}
		else if (temp >= 33 && temp <= 211) {
			cout << "At this temperature nothing will happen to the contents of Water!\n"; //will reiterate that substance will stay constant
		}
		else if (temp >= 212) {
			cout << "At this Temperature Water will Boil!\n"; //will reiterate that substance will boil
		}

		cout << "\n"; //line break


		cout << "whould you like to enter another temp? "; //user inputs whether they want to enter another temp.
		cin >> choice; //users answer stored
}

cout << "thank you for using this program.\n"; //end statement if user does not wish to enter another temp

    return 0;
}


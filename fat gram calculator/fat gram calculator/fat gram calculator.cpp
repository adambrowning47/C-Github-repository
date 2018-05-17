// fat gram calculator.cpp : Defines the entry point for the console application.
//Author: Adam Browning
//Date: 30 Oct 2017
//Purpose: Purpose of this program is to calculate the percentage of calories from fat from a given food. 


#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{


	double calories; //Declared variable for calories.
	double grams; //Declared variable for grams
	double fatGram = 9; //declared variable for how many calories are in one gram of fat.
	double gramsFat; //Declared variable for how much calories come from fat.
	double total; //Declared variable for the total percentage of calories from fat.
	

	cout << "Calories from fat Vs. calories. \n";
	cout << "************************************************* \n";
	cout << "	Calories provide a measure of how much energy  \n";
	cout << "you get from a serving of food. Many Americans  \n";
	cout << "consume more calories than they need without recommened \n";
	cout << "intakes for a numer of nutrients. One gram of fat has 9 calories \n";
	cout << "Food with less than 30% calories from fat are considered low fat. \n";
	cout << '\n';
	cout << "This program will calculate the percentage of fat in food \n";
	cout << "based on your input of total calories and fat in grams. \n";
	cout << "***************************************************************";

	cout << '\n'; //line break.

	cout << "Enter the total calories of your food: "; //user inputs how many calories their food has.
	cin >> calories; //stored variable.

	cout << '\n'; //line break


	cout << "Enter the amount of grams of fat present in your food: "; //user input
	cin >> grams; //stored variable for grams of fat.

	gramsFat = grams * fatGram; //calculations for how many fat from calories.

	total = gramsFat / calories; //changed the calories from fat to a percentage.

	cout << '\n'; //line break

	cout << "With " << grams << " grams of fat and " << calories << " total calories. \n"; //line stating how the percentage of calories from fat in food.
	cout << '\n';

	if (total >= 0.30) //if statement stating that if it is higher then 0.30 then it is high in fat.
		cout << "Your food has " << total * 100 << "% of fat coming from calories. it is high in fat. \n";
	
	else //if less then 0.30 then statement prints that it is low in fat.
		cout << "Your food has " << total * 100 << "% of fat coming from calories. It is low in fat. \n";
		cout << "Nice it is less than 30% calories from fat. \n";
	

	 

    return 0;
}


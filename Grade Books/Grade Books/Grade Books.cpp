// Grade Books.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void getNames(string[], int);
void getScores(string[], double[], int);
double getAvg(double[], int);

int main()
{
	const int Names = 5;
	const int Grades = 5;
	const int scores = 4;
	string name[Names];
	char grade[Grades];
	double Score[scores];
	int count;
	double average;

	getNames(name, Names);

	getScores(name, Score, scores);

	average = getAvg(Score, scores);

	for (count = 0; count < Names; count++) {
		cout << "The grade average for " << name[count] << "is: " << average << endl;

	}

	cout << endl;

	system("PAUSE");

	cout << "Press any key to continue";
	cin.get();




    return 0;
}

void getNames(string name[], int totNames) {

	int count;
	for (count = 0; count < totNames; count++) {
		cout << "\nEnter the name of a student " << (count + 1) << ": ";
		cin >> name[count];


	}


}
void getScores(string name[], double scores[], int totScores) {
	int num;
	for (num = 0; num < totScores; num++) {

		cout << "enter a score " << (num + 1) << " for " << name[num] << ": ";
		cin >> scores[num];

		if (scores[num] < 0 || scores[num] > 100) {
			cout << "Error, please enter a number 1-100: ";
			cin >> scores[num];
		}
		
	}



}
double getAvg(double scores[], int scoreTotal) {
	double avg,
		sum = 0;
	avg = sum / scoreTotal;
	for (int count = 0; count < scoreTotal; count++)
		sum += scores[count];
	return avg;
}

// Overloaded Hospital.cpp : Defines the entry point for the console application.
//Author Adam Browning
//date: 5 Dec 2017
//purpose: Purpose is to calculate the bill of an inpatient or an outpatient using overloading functions

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//function prototypes
float inPatient(int days, float dailyRate, float medCharg, float serCharge);
float outPatient(float medCharg, float serCharge);

int main()

{
	char patStatus;//declared variable for patients status, in or out patient
	string patName;//declared string for name of patient
	char choice = 'Y'; //delcared choice to loop back to main menu
	//if user pick y, will repeat
while (choice == 'Y' || choice == 'y') {
	system("CLS");//clear screen statement.
	//front screen
	cout << "\n=======================================================================\n";
	cout << "\n                 +Bill-Me-Not Hospital billing software+               \n";
	cout << "\n=======================================================================\n";
	cout << endl;//line break
	cout << endl;//break
	cout << "This program is to calculate the bill of a patient. You will pick for the the menu\n ";
	cout << "on what the staus of the patient is.";

	cout << endl;//line break


	// do statement for loop.
	do {

		cout << endl;

		//menu choices for user
		cout << "I. In-Patient.\n";
		cout << "O. Out-Patient.\n";
		cout << "Q. Exit program";

		cout << endl;
		cout << endl;
		cout << "What is the status of of the patient: ";//user enters the patients status
		cin >> patStatus;


		cout << endl;
		cout << "What is the Patients name: ";//user enters the patients name.
		cin >> patName;

		cout << endl;

		

		cout << endl;
		//if user enters I
		if (patStatus == 'I' || patStatus == 'i') {
			int days; //declared variable for days spent
			float dailyRate;//declared variable for the daily rate
			float medCharg;//declared variable for medication charges
			float serCharge;//declared variable for service charges
			float total;

			cout << "How many days did " << patName << " stay for: ";// user enters how many days the patient spent.
			cin >> days;//number is stored
			cout << endl;
			if (days < 0) {
				cout << "The days stayed must be a positive number, try again: ";//if days is a negative number, user prompted to enter a positive.
				cin >> days;
				cout << endl;
			}

			cout << "What was the daily rate for " << patName << ":  $ ";//user enters the daily rate
			cin >> dailyRate;
			cout << endl;
			if (dailyRate < 0) {
				cout << "the daily rate must be a positive number, try again: ";//prompt if negative
				cin >> dailyRate;
				cout << endl;
			}

			cout << "What where the medication charges for " << patName << ": $  ";//user enters medication charges
			cin >> medCharg;
			cout << endl;
			if (medCharg < 0) {
				cout << "The medicine charges must be a positive number, try again: ";//prompt if negative number.
				cin >> medCharg;
			
			}
			cout << endl;
			cout << "What are the service charges(X-rays, ect) for " << patName << ": $ ";//user enters service charges
			cin >> serCharge;

			if (serCharge < 0) {
				cout << "The services charges must be a positive number, try again: ";//prompt if negative number is enterd
				cin >> serCharge;
				cout << endl;
			}
			cout << endl;

			total = inPatient(days, dailyRate, medCharg, serCharge);//pulls calculations from InPatient overload function

			cout << "The total bill for " << patName << " is $" << total;//total displayed
			cout << endl;
			cout << endl;
		}
		//if user enters O for outpatient.
		else if (patStatus == 'O' || patStatus == 'o') {

			float total;//declared variable for total
			float medCharg;//declared variable for medication charges
			float serCharge;//declared variable for service charges
			cout << endl;
			cout << "What were the medicine charges for " << patName << ": $ ";//user enters medication charges
			cin >> medCharg;
			cout << endl;

			if (medCharg < 0) {

				cout << "The medicine charges must be a positive number, please enter a positive number and try again: ";//prompt if negative is entered
				cin >> medCharg;
				cout << endl;
			}
			cout << endl;
			cout << "What were the service charges for " << patName << ": $ ";//user enters service charges.
			cin >> serCharge;
			cout << endl;

			if (serCharge < 0) {

				cout << "the service charges must be a positive number, please enter a positive number and try again: ";//prompt if negative number is entered
				cin >> serCharge;
				cout << endl;
			}
			cout << endl;
			total = outPatient(medCharg, serCharge);//pulls calculations fom outPatient overload function

			cout << "The total bill for " << patName << " is $ " << total;//total is displayed
			cout << endl;
			cout << endl;

		}
		//if user enters Q. program exites.
		else if (patStatus == 'Q' || patStatus == 'q') {
			cout << "exiting program";
			exit(0);


		}
		cout << endl;
		cout << "Would you like to enter another patients charges. y/n:";//prompt if user wants to enter another patients charges
		cin >> choice;
		system("CLS");
	
	} while (choice != 'n');
	cout << endl;
	cout << "Thanks for using this program.";//program exits if user does not want to enter another patiends charges..
	

}


		return 0;

}
//inPatient overload function
float inPatient(int days, float dailyRate, float medCharg, float serCharge) {

	float totalStayChar;//declared variable for total charges
	float totalChar;//declared variable for temp.
	float total;

	totalChar = medCharg + serCharge;//calculates charges.


	totalStayChar = days * dailyRate;//calculates total charges for how many days spent.
	total = totalChar + totalStayChar;//calculates total amount billed

	return total;//total amount returned
}
//outpatient overload function
float outPatient(float medCharg, float serCharge) {

	float totalChar;//declared variable for total charges.
	



	totalChar = medCharg + serCharge;//total charges calculated

	return totalChar;//total charges returned.



}













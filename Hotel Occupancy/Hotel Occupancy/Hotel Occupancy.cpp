// Hotel Occupancy.cpp : Defines the entry point for the console application.
//Author: Adam Browning
//version: 10.2
//date: 30 NOV. 2017.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	int Floors = 0;//declared variable for floors
	int Rooms = 0;//declared variable for rooms
	float totRooms = 0.00;//declared variable for total amount of rooms
	int totFloors = 0;//declared variable for total amount of floors.
	int Occu = 0;//declared variable for occupied rooms
	float totOccu = 0.00;//declared variable for total occupied
	float percOccu = 0.00;//declared variable for percentage of rooms occupied.
	
	cout << "\n\n Welcome to the Flat Earths Motel.";//front page describing what to do.
	cout << "\n";
	cout << "=========================================================\n";
	cout << "\n";
	cout << "This is your home away from home. Hospitalice at its best.\n";
	cout << "We will treat you as if you never left.\n";
	cout << "----------------------------------------------------------\n";

	cout << "Check out our rates.\n";
	
	cout << "_____________________________________________________________\n";
	
	cout << "Single room: $40 - per night.\n";
	cout << "\n";
	cout << "double room: $75 - per night. \n";
	cout << "\n";
	cout << "presidential suite: $1200 - per night. \n";
	cout << "\n";
	cout << "This program calculates the occupancy rate of this Motel.\n";
	cout << "========================================================\n";


	cout << "Enter number of floors: ";//user enters amount of floors.
	cin >> Floors;
	
	cout << "\n======================================================\n";
	

	cout << "\n";//line break.
	
	while (Floors < 1) { // floors must be greater then 1 if not greater then one this page appears.

		cout << "Number of floors must be at least 1. Please re-enter :";
		cin >> Floors;
		
		cout << "\n======================================================\n";
		
	}
	//for statement for floors.
	for (int i = 1; i <= Floors; i++) {
		//skips 13th floor
		if (i != 13) { 
			
			cout << "Enter the number of rooms on Floor " << i << ": ";//user enters amount of rooms on floor
			cin >> Rooms;
			
			cout << "\n";//line break.
			//while statement stating that rooms must be greater then 10
			while (Rooms < 10) {
			
				cout << "Number of rooms on floor must be at least 10. Please re-enter: ";
				cin >> Rooms;

				
			}
			
			cout << "How many rooms are occupied: ";//user enters amout of rooms occupied on floor
			cin >> Occu;
			cout << "\n";//line break.
			totRooms += Rooms;
			totOccu += Occu;

	}

}
	cout << "\n";
	percOccu = (totOccu / totRooms) * 100; //calculates percentage of occupied in hotel.

	cout << "Summery of occupancy today.\n";
	cout << "\n";
	cout << "===============================\n";
	cout << "\n";
	cout << "Total floors in Motel : " << Floors << "\n";//displays number of floors in hotel
	cout << "\n";
	cout << "Total rooms in motel  : " << totRooms << "\n";//displays total rooms in motel
	cout << "\n";
	cout << "total Rooms occupied  : " << totOccu << "\n"; //displays total rooms occupied 
	cout << "\n";
	cout << "Total rooms available : " << totRooms - totOccu << " \n"; //calculates amount of room available
	cout << "\n";
	cout << "Hotel occupancy rate  : " << percOccu << "%.\n"; //displays percentage of room occupied.





    return 0;
}


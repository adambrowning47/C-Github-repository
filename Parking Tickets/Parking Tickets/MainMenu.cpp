// Parking Tickets.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
using namespace std;



int main()
{
	ParkingTicket *ticket = nullptr;

	ParkedCar car("Dodge", "2013", "Silver", "4499BLE", 500);

	ParkingMeter meter(45);

	PoliceOfficer officer("Adam Browning", "8720");

	ticket = officer.patrol(car, meter);
	
	if (ticket != nullptr) {
		officer.print();

		ticket->print();

		delete ticket;
		ticket = nullptr;




	}
	else
		cout << "No crimes were committed.\n";

    return 0;
}


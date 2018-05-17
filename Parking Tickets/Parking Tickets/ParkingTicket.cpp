#include "stdafx.h"
#include "ParkingTicket.h"
#include <iostream>
#include <iomanip>
using namespace std;

ParkingTicket::ParkingTicket() {
	fine = 0.0;
	minutes = 0;

}

ParkingTicket::ParkingTicket(ParkedCar aCar, int min) {
	car = aCar;
	minutes = min;

	calculateFine();
}

ParkingTicket::ParkingTicket(const ParkingTicket &ticket2) {
	car = ticket2.car;
	fine = ticket2.fine;

}

void ParkingTicket::calculateFine() {
	double hours = minutes / 60.0;
	int hoursAsInt = static_cast<int>(hours);

	if ((hours - hoursAsInt) > 0)
		hoursAsInt++;

	fine = BASE_FINE;

	fine += (hoursAsInt * HOURLY_FINE);
}

void ParkingTicket::print() {
	car.print();

	cout << "Ticket Information: \n";
	cout << "\tMinutes in violation: " << minutes << endl;
	cout << "\tFine: $" << setprecision(2) << fixed << showpoint << fine << endl;

}

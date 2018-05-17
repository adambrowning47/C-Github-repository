#include "stdafx.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
#include <iostream>
using namespace std;

ParkingTicket* PoliceOfficer::patrol(ParkedCar car, ParkingMeter meter) {
	int illegalMinutes = car.getMinutesParked() - meter.getMinutesPurchased();

	if (illegalMinutes > 0) {
		ticket = new ParkingTicket(car, illegalMinutes);

	}

	return ticket;
}

void PoliceOfficer::print() {
	cout << "Police officer Information: \n";
	cout << "\tName: " << name << endl;
	cout << "\tBadge Number: " << badgeNumber << endl;


}
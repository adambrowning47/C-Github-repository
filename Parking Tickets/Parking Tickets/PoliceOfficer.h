#pragma once
#ifndef POLICE_OFFICER_H
#define POLICE_OFFICER_H
#include "ParkingMeter.h"
#include "ParkedCar.h"
#include "ParkingTicket.h"

class PoliceOfficer {

private:
	string name;
	string badgeNumber;
	ParkingTicket *ticket;

public:
	PoliceOfficer() {
		name = ""; badgeNumber = ""; ticket = nullptr;
	}

	PoliceOfficer(string n, string bn) {
		name = n;
		badgeNumber = bn;
		ticket = nullptr;
	}

	PoliceOfficer(const PoliceOfficer &officer2) {
		name = officer2.name;
		badgeNumber = officer2.badgeNumber;
		ticket = new ParkingTicket(*officer2.ticket);

	}

	void setName(string n) {
		name = n;
	}
	
	void setBadgeNumber(string b) {
		badgeNumber = b;
	}

	string getName() {
		return name;
	}

	string getBadgeNumber() {
		return badgeNumber;
	}

	ParkingTicket *patrol(ParkedCar, ParkingMeter);

	void print();
};

#endif // !POLICE_OFFICER_H


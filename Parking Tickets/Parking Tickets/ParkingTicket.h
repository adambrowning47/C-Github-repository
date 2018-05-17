#pragma once
#ifndef PARKING_TICKET_H
#define PARKING_TICKET_H
#include "ParkedCar.h"

const double BASE_FINE = 25.0;

const double HOURLY_FINE = 10.0;

class ParkingTicket {

private:
	ParkedCar car;
	double fine;
	int minutes;

	void calculateFine();
public:
	ParkingTicket();
	
	ParkingTicket(ParkedCar, int);

	ParkingTicket(const ParkingTicket &);

	void setCar(ParkedCar c) {
		car = c;


	}

	void setMinutes(int m) {
		minutes = m;
	}

	ParkedCar getCar() const {
		return car;
	}

	double getFine() const {
		return fine;
	}

	void print();


};


#endif // !PARKING_TICKET_H

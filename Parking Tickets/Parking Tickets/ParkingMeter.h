#pragma once
#ifndef PARKING_METER_H
#define PAKRING_METER_H
#include <iostream>
using namespace std;

class ParkingMeter {

private:
	int minutesPurchased;

public:
	ParkingMeter() {
		minutesPurchased = 0;
	}
	ParkingMeter(int m) {
		minutesPurchased = m;
	}
	void setMinutesPurchased(int m) {
		minutesPurchased = m;
	}
	int getMinutesPurchased() const {
		return minutesPurchased;
	}
	void print() {
		cout << "Meter Information: \n";
		cout << "\tMinutes Purchased: " << minutesPurchased << endl;
	}



};




#endif // !PARKING_METER_H


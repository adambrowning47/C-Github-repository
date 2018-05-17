#pragma once
#ifndef PARKED_CAR_H
#define PARKED_CAR_H
#include <string>
using namespace std;

class ParkedCar {
private:
	string make;
	string model;
	string color;
	string licenseNumber;
	int minutesParked;

public:
	ParkedCar();

	ParkedCar(string, string, string, string, int);

	ParkedCar(const ParkedCar &);

	void setMake(string m) {
		model = m;
	}

	void setModel(string m) {
		model = m;
	}

	void setColor(string c) {
		color = c;
	}
	void setLicenseNumber(string lic) {
		licenseNumber = lic;
	}
	void setMinutesParked(int m) {
		minutesParked = m;
	}
	string getMake() const {
		return make;
	}
	string getModel() const {
		return model;
	}
	string getColor() const {
		return color;
	}
	string getLicenseNumber() const {
		return licenseNumber;
	}
	int getMinutesParked() const {
		return minutesParked;
	}
	void print();
};

#endif
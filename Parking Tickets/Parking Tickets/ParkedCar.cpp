#include "stdafx.h"
#include <iostream>
#include "ParkedCar.h"
using namespace std;

ParkedCar::ParkedCar() {
	make = "";
	model = "";
	color = "";
	licenseNumber = "";
	minutesParked = 0;


}

ParkedCar::ParkedCar(string mk, string mod, string col, string lic, int min) {
	make = mk;
	model = mod;
	color = col;
	licenseNumber = lic;
	minutesParked = min;
}

ParkedCar::ParkedCar(const ParkedCar &car2) {
	make = car2.make;
	model = car2.model;
	color = car2.color;
	licenseNumber = car2.licenseNumber;
	minutesParked = car2.minutesParked;
}

void ParkedCar::print() {
	cout << "Car Information: \n";
	cout << "\tMake: " << make << endl;
	cout << "\tModel: " << model << endl;
	cout << "\tColor: " << color << endl;
	cout << "\tLicense Number: " << licenseNumber << endl;
	cout << "\tMinutes Parked: " << minutesParked << endl;
}
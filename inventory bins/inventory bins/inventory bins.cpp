// inventory bins.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>
#include <cmath>
#include <ctype.h>
#include <cctype>
/* For rand and srand */
#include <cstdlib>
#include <cstring>
/* For the time function */
#include <ctime>
/* For file processing */
#include <fstream>
#include <iomanip>
#include <iterator>
/* For file processing*/
#include <iostream>
#include <locale>
/* For reading/writing of files */
#include <fstream>
#include <iostream>
/* For using unique_ptr */
#include <memory>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <vector>
#include <Windows.h>

using std::cin;
using std::flush;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::setw;
using std::showpoint;
using std::left;
using std::right;
using std::to_string;
using std::unique_ptr;
using std::streamoff;
using std::string;
using std::setfill;
using std::stringstream;
using std::fstream;
using std::ios;
using std::vector;

void pauseSystem()
{
	cin.get();
	cin.ignore();
}

void clearScreen()
{
	DWORD n;
	DWORD size;
	COORD coord = { 0 };
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(h, &csbi);
	size = csbi.dwSize.X * csbi.dwSize.Y;
	FillConsoleOutputCharacter(h, TEXT(' '), size, coord, &n);
	GetConsoleScreenBufferInfo(h, &csbi);
	FillConsoleOutputAttribute(h, csbi.wAttributes, size, coord, &n);
	SetConsoleCursorPosition(h, coord);
}

using namespace std;
struct InventoryBin {

	string partDesc;
	int numPart;

	InventoryBin(string pD = "N/A", int nP = 30) {
		partDesc = pD;
		numPart = nP;



	}
	~InventoryBin() {

	}

};

enum options {

	ADD_PARTS = 1, REMOVE_PARTS = 2, QUIT = 3

};

void menu(InventoryBin[], const int);
void displayBins(InventoryBin[], const int);
int getBinID(const int);
void addParts(InventoryBin[], const int, const int, const int);
void removeParts(InventoryBin[], const int, const int, const int);
int main() {

	const int BINS = 10;

	InventoryBin invBins[BINS] = { {"Valve",    10}, {"Bearings",   5},
	{"bushings",    15}, {"Coupling",   21}, {"Flange",     7}, {"Gear",     5},
	{"Gear Housing",    5}, {"Vacuum Gripper",   25}, {"cable",    18}, {"Rod",   12} };
	

	menu(invBins, BINS);

	pauseSystem();
	

	return 0;
}

void menu(InventoryBin invBins[], const int BINS) {

	const int MAX_PARTS = 30;
	const int MIN_PARTS = 0;

	int selection = 0;
	
	int binID = 0;

	displayBins(invBins, BINS);

	do {
		cout << "\n\tSelect[1] to add items\n";
		cout << "\tSelect[2] to remove items\n";
		cout << "\tSecect[3] to quit\n";
		cin >> selection;

		while (selection < ADD_PARTS || selection > QUIT) {

			cout << "\tSelect: \n";
			cin >> selection;
		}
		switch (selection) {
		case ADD_PARTS: {

			binID = getBinID(BINS);

			if (invBins[binID].numPart != MAX_PARTS) {


				addParts(invBins, binID, MAX_PARTS, BINS);

			}
			clearScreen();
			displayBins(invBins, BINS);


		}break;
		case REMOVE_PARTS: {

			binID = getBinID(BINS);

			if (invBins[binID].numPart != MIN_PARTS) {
				removeParts(invBins, binID, MIN_PARTS, BINS);



			}
			clearScreen();
			displayBins(invBins, BINS);


		}break;

		case QUIT: {


			cout << "thank you ocm again\n";

		}

		}

	
		} while (selection != QUIT);
	} 

	

void displayBins(InventoryBin invBins[], const int BINS) {
	cout << "\n\t\t  Gout Salt Mine Warehouse - Inventory \n\n\n"
		<< "\tBin\t     Part Description"
		<< setw(31) << right << "Number of Parts\n\n";

	for (int index = 0; index < BINS; index++) {

		cout << "\t";
		cout << setw(12) << left << (index + 1)
			<< setw(15) << left << invBins[index].partDesc
			<< setw(30) << right << invBins[index].numPart << "\n";

		}
	




}

int getBinID(const int BINS) {

	int binID = 0;

	cout << "\n\tEnter Bin Number: ";
	cin >> binID;

	while (binID < 1 || binID > BINS) {

		cout << "\n\tEnter bin number: ";
		cin >> binID;

	}

	return binID -= 1;
}

void addParts(InventoryBin invBins[], const int selection,
	const int MAX_PARTS, const int BINS) {

	int add = 0;

	cout << "\n\tEnter number of parts to add: ";
	cin >> add;

	while (add < 0) {

		cout << "\tEnter number of parts to add: ";
		cin >> add;

	}
	while (invBins[selection].numPart + add > MAX_PARTS) {
		
		cout << "\n\tMaximum Part numper 30 items \n\n"
			<< "\tEnter number parts: ";
		cin >> add;
			
	}
	if (invBins[selection].numPart + add <= MAX_PARTS) {

		invBins[selection].numPart += add;

	}
}

void removeParts(InventoryBin invBins[], const int selection, const int MIN_PARTS, const int BINS) {


	int remove = 0;

	cout << "\n\tEnter number of parts to remove: ";
	cin >> remove;

	while (remove < 0) {

		cout << "\n\tEnter number of parts to remove: ";
		cin >> remove;


	}
	if (invBins[selection].numPart - remove < MIN_PARTS) {

		invBins[selection].numPart -= remove;

	}

}

#include "SecondsConverter.h"
#include <iostream>

using namespace std;

void run_sc();
//runs the seconds converter program.
void run_ba();
//runs the babylonian algorithm program.

int main(){

	cout << "C++ Basics Menu" << endl << "1. Seconds Converter" << endl << "2. Babylonian Algorithm" << endl << "Choice: ";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << endl;
		run_sc();
		break;
	case 2:
		cout << endl;
		cout << "COMING SOON." << endl;
		break;
	default:
		cout << choice << " is invalid." << endl;
		break;
	}
	
	return 0;
}
void run_sc(){
	int nbrSeconds = get_seconds();

	int copy = nbrSeconds;

	int hours = copy / 3600;
	copy -= (hours * 3600);

	int minutes = copy / 60;
	copy -= (minutes * 60);

	print(nbrSeconds, hours, minutes, copy);
}
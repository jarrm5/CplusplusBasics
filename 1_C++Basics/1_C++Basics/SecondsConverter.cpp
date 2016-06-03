#include "SecondsConverter.h"
#include <iostream>

using namespace std;

int get_seconds(){

	int nbrSeconds;

	do
	{
		cout << "Enter the number of seconds: ";
		cin >> nbrSeconds;

		if (nbrSeconds > 0)
		{
			return nbrSeconds;
		}
		else
		{
			cout << "Need a number greater than 0." << endl;
		}
	} while (true);

}
void print(int originalSeconds, int hours, int minutes, int seconds){

	cout << originalSeconds;

	originalSeconds == 1 ? cout << " second is " : cout << " seconds is ";

	hours == 0 ? cout : hours == 1 ? cout << hours << " hour " : cout << hours << " hours ";

	minutes == 0 ? cout : minutes == 1 ? cout << minutes << " minute " : cout << minutes << " minutes ";

	seconds == 0 ? cout : seconds == 1 ? cout << seconds << " second." : cout << seconds << " seconds.";

	cout << endl;
}



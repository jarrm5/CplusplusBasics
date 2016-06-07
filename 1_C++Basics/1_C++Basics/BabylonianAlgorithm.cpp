#include "BabylonianAlgorithm.h"
#include <iostream>

using namespace std;

double baby_alg(double n){
	 double guess = n/2.0;

	 for (int i = 0; i < 5; i++)
	 {
		 double result = n / guess;
		 guess = (guess + result)/2.0;
	 }

	 return guess;
}
double get_n(){

	do
	{
		double n;
		cout << "Enter a positive number: ";
		cin >> n;

		if (n > 0)
		{
			return n;
		}

		cout << "Input must be positive." << endl;

	} while (true);

}
#include <iostream>

using namespace std;

int main() {

	//Set the console to show output in monetary format
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	//Starting variables
	const double MONTHLY_INTEREST_RATE = 1.5;
	double loan = 1000.0, loanProgress = loan, interestPaid = 0.0;
	int month = 0;

	cout << "MONTH\tLOAN AMOUNT\tINTEREST PAID" << endl;

	while (loanProgress > 0)
	{
		//Calculate interest based on how much is currently owed.
		double interest = (MONTHLY_INTEREST_RATE * .01) * loanProgress;

		//Add this amount to the total amount of interest paid.
		interestPaid += interest;

		//Subtract the interest calculated for this month from the monthly payment ($50)
		//Subtract this amount from how much is currently owed.
		//Check to make sure this amount doesn't go below 0
		if (loanProgress - (50.0 - interest) < 0)
		{
			//If the leftover monthly payment exceeds the amount owed, the loan is paid off
			loanProgress = 0;
		}
		else
		{
			//The leftover monthly payment can be subtracted from the loan.
			loanProgress -= (50.0 - interest);
		} 
		
		//Increment the number of months
		month++;

		cout << month << "\t$" << loanProgress << "\t\t$" << interest << endl;
	}
	
	cout << endl << "$" << loan << " loan @ 1.5% monthly interest will take " << month << " months to pay off." << endl;
	cout << "$" << interestPaid << " in interest was paid." << endl << endl; 

	return 0;
}
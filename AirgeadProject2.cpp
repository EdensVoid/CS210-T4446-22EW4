//Name: Alena Brumley
//Date: 04/04/2022
//Professor: Bill Chan
//CS 210 T4446 22EW4

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//Declaring variables here to hold user input
	float initialInv, monthDep, annualInt, months, years;
	//Declaring variables to store year end total amount as well as regular interest and year end interest
	float totalAmount, interestAmount, yearTotalInterest;

	//Display the menu to user
	cout << "***********************************\n";
	cout << "*********** Data Input ************\n";
	cout << "Initial Investment Amount: $";
	cin >> initialInv;
	cout << "Monthly Deposit: $";
	cin >> monthDep;
	cout << "Annual Interest: %";
	cin >> annualInt;
	cout << "Number of years: ";
	cin >> years;
	months = years * 12;

	//Wait for user input
	system("PAUSE");

	//Set total amount to initial investment to update it
	totalAmount = initialInv;

	//Display year data minus monthly deposits
	cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
	cout << "==============================================================\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "--------------------------------------------------------------\n";

	for (int i = 0; i < years; i++) {

		//Calculate yearly interest
		intAmt = (totalAmount) * ((annualInt / 100));

		//Calculate year end total
		totalAmount = totalAmount + interestAmount;

		//Print the results to a table, decimal numbers only going as far as two decimal points
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << interestAmount << "\n";
	}

	//Set total amount to initial investment to update it
	totalAmount = initialInv;

	//Display year data with the monthly deposits this time
	cout << "\nBalance and Interest With Additional Monthly Deposits\n";
	cout << "==============================================================\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "--------------------------------------------------------------\n";

	for (int i = 0; i < years; i++) {
		//Set yearly interest to zero at the start of the year
		for (int j = 0; j < 12; j++) {
			//Calculate monthly interest
			interestAmount = (totalAmount + monthDep) * ((annualInt / 100) / 12);

			//Calculate end of month interest
			yearTotalInterest = yearTotalInterest + interestAmount;

			//Calculate end of month total
			totalAmount = totalAmount + monthDep + interestAmount;

		}

		//Print results to a table, decimal numbers only going as far as two decimal points again
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << yearTotalInterest << "\n";
	}

	return 0;
}
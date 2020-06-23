// CIT125_Ch5_Luigi_Robles.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Luigi Robles
// Ch.5 Pg.154 Figure 5-38
// 6-22-2020 Summer Term

#include <iostream> // preprocessing directive
using namespace std;
#include <iomanip> // directive to use setprecisoin manipulator

int main()
{
	//declare named constants and variables
	const double RATE1 = 0.2; // named constant for Rate1
	const double RATE2 = 0.015; // named constant for Rate2
	double sales = 0.0;
	double bonus = 0.0;

	//enter input item
	cout << "Sales amount: ";
	cin >> sales; // input part of IPO

	//calculate bonus
	//selection stucture and Processing part of IPO
	if (sales >= 15000.0)
		bonus = sales * RATE1;
	else
		bonus = sales * RATE2;
	//end if

	//display bonus
	//output part of IPO 
	cout << fixed << setprecision(2); // setting allowed decimals to '2'
	cout << "Bonus: $" << bonus << endl;
	return 0;
} // end of main function
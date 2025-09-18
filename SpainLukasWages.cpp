// SpainLukasWages.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lukas Spain
// 09/02/2025
// Wages Version 1

#include <iostream>
#include <string>

using namespace std;

const double TAXRATE = .10;

int main()
{
	//declare variables
    string fName;
	string lName;
	double hoursWorked;
	double hourlyWage;
	double net;
	double gross;

	//program title
	cout << "Wages Program \n";
	cout << "Created by: Lukas Spain \n\n";

	//program description/instructions
	cout << "This program will ask the user for their first and last name, hours worked, \n";
	cout << "and hourly wage. We will calculate net and gross pay and print results to the console. \n\n";

	//collect user input
	cout << "Enter your first name: ";
	cin >> fName;
	cout << "Enter your last name: ";
	cin >> lName;
	cout << "Enter your hours worked this week (can be partial hours): ";
	cin >> hoursWorked;
	cout << "Enter your hourly wage (ex: 13.75): ";
	cin >> hourlyWage;

	//calculations
	gross = hoursWorked * hourlyWage;
	net = gross - (gross * TAXRATE);

	//output results
	cout << endl << endl;
	cout << fName << " " << lName << endl;
	cout << "Your gross pay is: " << gross << endl;
	cout << "Your net pay is: " << net << " calculated with a " << TAXRATE << " tax rate." << endl;

    return 0;
}



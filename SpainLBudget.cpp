// SpainLBudget.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lukas Spain
// 09/04/2025
// Budget Version 1

#include <iostream>
#include <string>

using namespace std;

//constant variables
const double TAX_RATE = 0.15;
const double MORTGAGE_RATE = 0.25;
const double UTILITIES_RATE = 0.25;
const double FOOD_RATE = 0.05;
const double SAVINGS_RATE = 0.05;

int main()
{
    //declare variables
    string fName;
	string lName;
    double payRate;
	double hoursWorked;
    double gross;
    double net;
	double taxes;
    double mortgage;
	double utilities;
	double food;
	double savings;
	double totalExpenses;
	double leftOver;

    //program title
    cout << "Budget Program \n";
    cout << "Created by: Lukas Spain \n\n";

    //program description/instructions
    cout << "*********************************************************** \n";
    cout << "This program will create a budget for the user based on \n";
    cout << "total hours worked and pay rate and allocate the following: \n";
    cout << "15% for taxes. \n";
    cout << "25% for mortgage. \n";
    cout << "25% for utilities. \n";
    cout << "5% for food. \n";
	cout << "5% for savings. \n";
	cout << "*********************************************************** \n\n";

	//collect user input
    cout << "Enter your first name: ";
    cin >> fName;
	cout << "Enter your last name: ";
	cin >> lName;
    cout << "Enter your hourly wage (ex: 13.75): $";
	cin >> payRate;
    cout << "Enter your hours worked this month (ex: 260 or 260.25): ";
	cin >> hoursWorked;

    //calculations
	gross = payRate * hoursWorked;
	taxes = gross * TAX_RATE;
	net = gross - taxes;
	mortgage = net * MORTGAGE_RATE;
	utilities = net * UTILITIES_RATE;
	food = net * FOOD_RATE;
	savings = net * SAVINGS_RATE;
	totalExpenses = (mortgage + utilities + food + savings);
	leftOver = net - totalExpenses;


    //output to console
    cout << endl << endl;
	cout << "Your name is: " << fName << " " << lName << "." << endl;
	cout << "Your hourly wage is: $" << payRate << "." << endl;
    cout << "You worked " << hoursWorked << " hours this month." << endl;
    cout << "Your gross earnings this month are: $" << gross << "." << endl;
	cout << "Your taxes on your gross earnings are: $" << taxes << "." << endl;
	cout << "Your mortgage is: $" << mortgage << "." << endl;
	cout << "Your utilities are: $" << utilities << "." << endl;
	cout << "Your food cost is: $" << food << "." << endl;
	cout << "Your savings amount is: $" << savings << "." << endl;
	cout << "Your total expenses are: $" << totalExpenses << "." << endl;
	cout << "Your leftover amount is: $" << leftOver << "." << endl;

    return 0;
}
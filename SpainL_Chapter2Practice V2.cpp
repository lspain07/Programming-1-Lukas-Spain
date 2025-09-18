// SpainL_Chapter2Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lukas Spain
// 08/28/2025
// Chapter 2 Practice Version 2

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//variable declarations
	string fName;
	int age;
	double gpa;
	string major;
	string year;
	int gradYear;
	char grade;

	//program title and created by
	cout << "Chapter 2 Practice Program \n";
	cout << "Created by Lukas Spain \n";
	cout << "Version 2 - Added getline function, columns, .ignore, and fixed decimal places \n\n";

	//program description/instructions
	cout << "This program will ask the user for the first name, age, \n";
	cout << "current gpa, major, class, expected graduation year, and grade they hope to receive. \n";
	cout << "We will then print that information back to the console in a column format.\n\n";

	//Collect user input
	cout << "Enter your first name: ";
	cin >> fName;
	cout << "Enter your age in years: ";
	cin >> age;
	cout << "Enter your current GPA (ex: 3.75): ";
	cin >> gpa;
	cin.ignore();
	cout << "Enter your major (CS, Finance, Business): ";
	getline(cin, major);
	cout << "Enter your class (freshman, sophomore, junior, senior): ";
	cin >> year;
	cout << "Enter your expected graduation year: ";
	cin >> gradYear;
	cout << "Enter what letter grade you hope to receive in this class (ex: A): ";
	cin >> grade;

	//clear console
	system("cls");

	//output to console
	cout << setprecision(2) << showpoint << fixed;
	cout << endl << endl;
	cout << setw(16) << left << setfill('.') << "Name: " << setw(26) << right << fName << endl;
	cout << setw(16) << left << "Age: " << setw(26) << right << age << endl;
	cout << setw(16) << left << "GPA: " << setw(26) << right << gpa << endl;
	cout << setw(16) << left << "Major: " << setw(26) << right << major << endl;
	cout << setw(16) << left << "Class: " << setw(26) << right << year << endl;
	cout << setw(16) << left << "Grad Year: " << setw(26) << right << gradYear << endl;
	cout << setw(16) << left << "Desired Grade: " << setw(26) << right << grade << endl;

	return 0;
}
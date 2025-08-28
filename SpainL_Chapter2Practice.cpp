// SpainL_Chapter2Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lukas Spain
// 08/28/2025
// Chapter 2 Practice Version 1

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//variable declarations
	string fName;
	string lName;
	char mInitial;
	int age;
	double gpa;

	//program title and created by
	cout << "Chapter 2 Practice Program \n";
	cout << "Created by Lukas Spain \n\n";

	//program description/instructions
	cout << "This program will ask the user for the first and last name, middle initial, age, \n";
	cout << "and current gpa. We will then print that information back to the console.\n\n";

	//Collect user input
	cout << "Enter your first name: ";
	cin >> fName;
	cout << "Enter your middle initial (no period): ";
	cin >> mInitial;
	cout << "Enter your last name: ";
	cin >> lName;
	cout << "Enter your age in years: ";
	cin >> age;
	cout << "Enter your current GPA (ex: 3.75): ";
	cin >> gpa;

	//output to console
	cout << endl << endl;
	cout << fName << " " << mInitial << ". " << lName << endl;
	cout << "Your age is: " << age << endl;
	cout << "Your current GPA is: " << gpa << endl;





    return 0;
}



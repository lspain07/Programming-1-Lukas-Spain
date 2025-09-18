// SpainLArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lukas Spain
// 09/4/2025
// Area Version 1

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//declare variables
	double base;
	double height;
	double area;

	//program title
	cout << "Area Program \n";
	cout << "Created by Lukas Spain \n\n";

	//program description
	cout << "This program will ask the user for the triangle's base and height in inches. \n";
	cout << "The program will calculate the area of the triangle and then output the area to the console. \n\n";

	//ask the user for input
	cout << "Enter the base length of the triangle in inches: ";
	cin >> base;
	cout << "Enter the height of the triangle in inches: ";
	cin >> height;

	//calculations
	area = (base * height) / 2;

	//output to the console
	cout << endl << endl;
	cout << "The base of your triangle is " << base << " inches." << endl;
	cout << "The height of your triangle is " << height << " inches." << endl;
	cout << "The area of your triangle is " << area << " square inches." << endl;

	return 0;
}

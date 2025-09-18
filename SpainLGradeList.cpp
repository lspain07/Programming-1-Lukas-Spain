// SpainLGradeList.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lukas Spain
// 09/18/25
// Grade List Version 1

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	// Declare Stream Variables
	ifstream fin;
	ofstream fout;

	// Declare Variables
	string name;
	double test1, test2, test3, testAvg;

	// Open Files
	fin.open("SpainLGradeInput.txt");
	fout.open("SpainLGradeListOutput.txt");

	// Program Title/Created By
	cout << "Grade List Program \n";
	cout << "Created by: Lukas Spain \n\n";

	// Program Description
	cout << "This program will read in the names and 3 test scores of 3 students from \n";
	cout << "an external file, it will calculate each student's test average, and print \n";
	cout << "them to an external file name. \"SpainLGradeListOutput.txt\" \n\n";

	// Output to file - column headings
	fout << setw(20) << left << "Name" << setw(8) << right << "Test 1" << setw(8) << "Test 2" << setw(8) << "Test 3"
		<< setw(10) << "Test Avg" << endl;

	// Read in data for person 1
	getline(fin, name);
	fin >> test1 >> test2 >> test3;
	
	// Calculations - person 1
	testAvg = (test1 + test2 + test3) / 3;

	// Output to file - person 1
	fout << setprecision(2) << fixed << showpoint;
	fout << setw(20) << left << name << setw(8) << right << test1 << setw(8) << test2 << setw(8) << test3
		<< setw(10) << testAvg << endl;

	// Read in data for person 2
	fin.ignore();
	getline(fin, name);
	fin >> test1 >> test2 >> test3;

	// Calculations - person 2
	testAvg = (test1 + test2 + test3) / 3;

	// Output to file - person 2
	fout << setprecision(2) << fixed << showpoint;
	fout << setw(20) << left << name << setw(8) << right << test1 << setw(8) << test2 << setw(8) << test3
		<< setw(10) << testAvg << endl;

	// Read in data for person 3
	fin.ignore();
	getline(fin, name);
	fin >> test1 >> test2 >> test3;

	// Calculations - person 3
	testAvg = (test1 + test2 + test3) / 3;

	// Output to file - person 3
	fout << setprecision(2) << fixed << showpoint;
	fout << setw(20) << left << name << setw(8) << right << test1 << setw(8) << test2 << setw(8) << test3
		<< setw(10) << testAvg << endl;

	// Output to console
	cout << "The program has run successfully. Check output file" << endl;
	cout << "name \"SpainLGradeListOutput.txt\" for results." << endl << endl;

	// Close files
	fin.close();
	fout.close();

	return 0;
}

/*
	Fazeli, Bijan

	April 9, 2017
	CS A262

	Lab 03
*/

#include <iostream>
#include <string.h>
#include <boost/algorithm/string.hpp>

using namespace std;

// CONST FIELDS, 
	// ID for entries, will be incr everytime a new entry is added
	// ROW for the amount of entries the student DB will hold
int iD = 1000, entries = 0;
const int ROW = 20;


// 2D array of students to serve as Database
string **students;
students = new string*[ROW];

// Declarations of fnxs
// addEntry
bool addEntry(const string& fullName, const string& age, const string& year, const string& major, const string& gpa);

// deleteEntry
bool deleteEntry(int target);

// getName
string getName();

// getAge
string getAge();

// getYear
string getYear();

// getMajor
string getMajor();

// getGPA
string getGPA();

// Main fnx
int main()
{
	// Display title and purpose to user.
	cout << "\tWelcome to Student Tracker 2000!" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "\nThis database will help you keep track of\n"
		<< "the student's at your school. You can store\n"
		<< "student's names, age, year, major and their GPA." << endl;
	cout << "--------------------------------------------------------------------------" << endl;

	// Display Main Menu
	bool isDone = false;
	int mainMenuChoice = 0;
	string fullName, age, year, major, gpa;

	do
	{
		cout << "Main Menu:\n"
			<< "1. Add a record\n"
			<< "2. Delete a record\n"
			<< "3. Display all records\n"
			<< "4. Filter records by field value\n"
			<< "5. Quit" << endl;
		
		do
		{
			if (mainMenuChoice < 0 || mainMenuChoice > 5)
			{
				cout << "Please enter a value between 1 - 5"
					<< "\nas displayed on the menu." << endl;
			}
			cin >> mainMenuChoice;
		} while (mainMenuChoice < 0 || mainMenuChoice > 5);

		if (mainMenuChoice == 1)	// Add entry
		{
			
		}
		else if (mainMenuChoice == 2)
		{
			 cout
		}

	} while (!isDone);


	system("pause");
	return 0;
}

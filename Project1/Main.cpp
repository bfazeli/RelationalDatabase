/*
	Fazeli, Bijan

	April 9, 2017
	CS A262

	Lab 03
*/

#include <iostream>
#include <string.h>
#include <boost/algorithm/string.hpp>
#include <boost/format.hpp>

using namespace std;

// CONST FIELDS
const int ROW = 200;
const char* ws = " \t\n\r\f\v";

// ID for entries, will be incr everytime a new entry is added
// ROW for the amount of entries the student DB will hold
int iD = 1000, entries = 0;

// 2D array of students to serve as Database
string **students;
students = new string*[ROW]();

// Declarations of fnxs
// addEntry
int addEntry(const string& fullName, const string& age, const string& year, const string& major, const string& gpa);

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

// Trim from end of string (right)
inline string& rtrim(std::string& s, const char* t = ws);

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

	do
	{
		do
		{
			cout << "Main Menu:\n"
				<< "1. Add a record\n"
				<< "2. Delete a record\n"
				<< "3. Display all records\n"
				<< "4. Filter records by field value\n"
				<< "5. Quit" << endl;

			cin >> mainMenuChoice;

			if (mainMenuChoice < 0 || mainMenuChoice > 5)
			{
				cout << "Please enter a value between 1 - 5"
					<< "\nas displayed on the menu.\n" << endl;
			}
		} while (mainMenuChoice < 0 || mainMenuChoice > 5);

		if (mainMenuChoice == 1)	// Add entry
		{
			cout << addEntry(getName(), getAge(), getYear(), getMajor(), getGPA()) << endl;
		}
		else if (mainMenuChoice == 2)
		{
			 cout
		}

	} while (!isDone);


	system("pause");
	return 0;
}

// Definition of fnxs
// addEntry
int addEntry(const string& fullName, const string& age, const string& year, const string& major, const string& gpa)
{
	int row = iD - 1000;
	
	students[row][0] = to_string(iD);
	students[row][1] = fullName;
	students[row][2] = age;
	students[row][3] = year;
	students[row][4] = major;
	students[row][5] = gpa;
	
	return iD++;
}

// deleteEntry
bool deleteEntry(int target)
{
	bool isFound = false;
	int index = 0
	
	while (!isFound && index < ROW)
	{
		if (students[index][0] == target)
		{
			students[index][0] = "";
			students[index][1] = "";
			students[index][2] = "";
			students[index][3] = "";
			students[index][4] = "";
			students[index][5] = "";
			
			isFound = true;
		}
		++index;
	}
	
	return isFound;
}

// getName
string getName()
{
	string fullName;

	do
	{
		cout << "Enter the student's name: ";
		cin.getline(fullName);

		if ((rtrim(fullName)) == "")
		{
			cout << "Field can not be left blank." << endl;
		}
	} while (fullName == "");

	return fullName;
}

// getAge
string getAge()
{
	string age;
	do
	{
		cout << "Enter the student's age: ";
		cin >> age;

		if ((rtrim(age)) == "")
		{
			cout << "Field can not be left blank." << endl;
		}
	} while (age == "");

	return age;
}

// getYear
string getYear()
{
	string year;
	do
	{
		cout << "Enter the student's current year: ";
		cin >> year;

		if ((rtrim(year)) == "")
		{
			cout << "Field can not be left blank." << endl;
		}
	} while (year == "");

	return year;
}

// getMajor
string getMajor()
{
	string major;
	do
	{
		cout << "Enter the student's current major: ";
		cin >> year;

		if ((rtrim(major) == "")
		{
			cout << "Field can not be left blank." << endl;
		}
	} while (major == "");

	return major;
}

// getGPA
string getGPA()
{
	string gpa;
	do
	{
		cout << "Enter the student's current gpa: ";
		cin >> gpa;

		if ((rtrim(gpa)) == "")
		{
			cout << "Field can not be left blank." << endl;
		}
	} while (gpa == "");

	return gpa;
}

// Trim
inline std::string& rtrim(string& s, const char* t = ws)
{
	s.erase(s.find_last_not_of(t) + 1);
	return s;
}

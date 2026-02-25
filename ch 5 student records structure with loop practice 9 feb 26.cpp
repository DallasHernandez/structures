#include <iostream>
using namespace std;

struct student
{
	int roll_number;
	char name[50];
	float marks;


};


int main()
{
	student students[3];

	for (int index = 0; index < 3; index++)
	{
		cout << "-----Enter details for student-----";

		cout << "Enter roll number:  " << endl;
		cin >> students[index].roll_number;

		cin.ignore();

		cout << "Enter student name:  ";
		cin.getline(students[index].name, 50);

		cin.ignore();

		cout << "Please enter students marks:  " << endl;
		cin >> students[index].marks;

		cout << "=============================" << endl;
		cout << "        Student Details" << endl;
		cout << "=============================" << endl;

		for (int index = 0; index < 3; index++)
		{
			cout << "Student " << (index + 1) << ":   ";
			cout << "Roll Number " << students[index].roll_number << ":   ";
			cout << "Marks " << students[index].marks << ":   ";
			cout << "Name " << students[index].name << ":   ";

			return 0;

	}







}


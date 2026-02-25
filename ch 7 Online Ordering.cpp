#include <iostream>
using namespace std;


struct Patient
{
	int patient_id;
	char name[50];
	float tempertature;


};





int main()
{
	Patient patients[5];

	for (int index = 0; index < 5; index)
	{
		cout << "\nEnter details for Patient " << (index + 1) << endl;

		cout << "Patients ID: ";
		cin >> patients[index].patient_id;

		cin.ignore();

		cout << "Patients name: ";
		cin.getline(patients[index].name, 50);

		cout << "Body Temperature: ";
		cin >> patients[index].tempertature;


	}

	cout << "\n=======Patients Records=========\n";

	for (int index = 0; index < 5; index++)
	{
		cout << "Patients " << (index + 1) << ": ";
		cout << "ID = " << patients[index].patient_id;
		cout << "Name = " << patients[index].name;
		cout << "Temperature = " << patients[index].tempertature;

	}

	return 0;
   
}


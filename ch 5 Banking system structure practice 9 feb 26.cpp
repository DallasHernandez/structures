#include <iostream>
using namespace std;

struct bank_account
{
	float acc_numb;
	char name[50];
	float balance;
};







int main()
{ 
	bank_account account;

	cout << "Pleas enter account number: " << endl;
	cin >> account.acc_numb;

	cin.ignore();

	cout << "Please enter your name:  " << endl;
	cin.getline(account.name, 50);

	cin.ignore();

	cout << "Please enter account balance:  " << endl;
	cin >> account.balance;
	
		
	cout << "------Bankaccount holder information-----" << endl;
	cout << "Account number:  " << account.acc_numb << endl;
	cout << "Account name:  " << account.name << endl;
	cout << "Account balance:  " << account.balance << endl;

	return 0;






   
}


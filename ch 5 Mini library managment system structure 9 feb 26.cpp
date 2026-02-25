#include <iostream>
using namespace std;

struct book
{
	int book_id;
	char title[50];
	float price;
};

int main()
{
	book book_1;

	cout << "Please enter Book ID:  " << endl;
	cin >> book_1.book_id;

	cin.ignore();

	cout << "Please enter Book title:  " << endl;
	cin.getline(book_1.title, 50);

	cout << "Please enter book price:  " << endl;
	cin >> book_1.price;


	cout << "----Book Details----" << endl;
	cout << "Book ID:  " << book_1.book_id;
	cout << "Book Title:  "<< book_1.title << endl;
	cout << "Book Price:  " << book_1.price << endl;

	return 0;



}


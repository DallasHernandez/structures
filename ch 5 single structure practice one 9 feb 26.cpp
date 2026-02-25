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
  
    student student_1;

    student_1.roll_number = 1;
    student_1.marks = 92.5;

    cout << "ROll Number:  " << student_1.roll_number << endl;
    cout << "Marks:  " << student_1.marks << endl;


}


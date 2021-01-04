//Author: Richard Rosenthal
//Date: 1-4-2021
//Purpose: To refresh on using variables in C++.

#include <iostream>
#include <string>
using namespace std;

void employee_profile();

int main(){

    employee_profile();

    return 0;
}

//Ask for employee to provide name and age and display it back to end-user.
void employee_profile() {


    int age;
    double hourly_wage {23.50};
    string name;

    cout << "Hello New Employee, please enter your name: " << endl;
    cin >> name;

    cout << "Please enter your age: " << endl;
    cin >> age;


    cout << "Hello " << name << ", you are " << age << " years old and you make $" << hourly_wage << " per hour" << endl;
    cout << "Welcome to ACME inc." << endl;
}
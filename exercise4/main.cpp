/*
Author Richard Rosenthal
 Date 1-6-21 */



#include <iostream>

using namespace std;

const int amountOfDaysValid = 30;
const double salesTax = 0.06;
const int smallRoom = 50;
const int largeRoom = 75;
double totalAmount;
int amountOfSmallRooms;
int amountOfLargeRooms;

int main() {

    cout << "Welcome to Ricky's Carpet Cleaning Business" << endl;
    cout << endl;
    cout << "How many small rooms do you want cleaned?" << endl;
    cin >> amountOfSmallRooms;
    cout << "How many large rooms do you want cleaned?" << endl;
    cin >> amountOfLargeRooms;

    cout << "Charges: " << endl;
    cout << "Amount of Small Rooms :" << amountOfSmallRooms << endl;
    cout << "Amount of Large Rooms :" << amountOfLargeRooms << endl;
    cout << "Price per Small Room $" << smallRoom << endl;
    cout << "Price per Large Room $" << largeRoom << endl;
    totalAmount = (smallRoom * amountOfSmallRooms) + (largeRoom * amountOfLargeRooms);
    cout << "Cost $" << totalAmount << endl;
    cout << "Tax $" << salesTax << endl;
    cout << "==============================" << endl;
    cout << "Total Estimate: $" << (totalAmount * salesTax) + totalAmount << endl;
    cout << "Valid for " << amountOfDaysValid << "days" << endl;

    return 0;
}

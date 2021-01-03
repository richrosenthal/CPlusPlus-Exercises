//Date: 1-3-21


#include <iostream>
using namespace std;

void date_of_birth();

int main(){
    date_of_birth();
    return 0;
}

void date_of_birth() {
    int m {};
    int d {};
    int y {};
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //---- WRITE YOUR CODE BELOW THIS LINE----
    cout  << "Please enter your birthday separated by spaces. ex (M:04 D:09 Y:1989)" << endl;
    cin >> m >> d >> y;


    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- Do NOT MODIFY THE CODE BELOW THIS LINE----
    cout << m << " " << d << " " << y;
}

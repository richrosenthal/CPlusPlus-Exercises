//Richard Rosenthal
// 1-7-20
//Purpose: an exercise in initializing and displaying vectors.


#include <iostream>
#include <vector>
using namespace std;

vector<int> use_vector();

int main() {
    cout << "I will initialize the vector with the numbers 10, 20, 30, 40, and 50" << endl;
    vector<int> vec = use_vector();

    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
    return 0;
}



vector<int> use_vector() {

    vector<int> vec {10, 20, 30, 40, 50};

    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }

    cout << "Now I will modify the first and last elements of the vector" << endl;

    vec[0] = 100;
    vec.pop_back();
    vec.push_back(1000);

    return vec;
}

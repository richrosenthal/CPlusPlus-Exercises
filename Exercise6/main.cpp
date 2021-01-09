//Author Richard Rosenthal
//Date 1-8-2021
//Purpose: To build more confidence with using vectors
//This is another exercise from the c++ course follow-along.

#include <iostream>
#include <vector>
using namespace std;

vector <int> vector_one;
vector <int> vector_two;

int main() {
  vector_one.push_back(10);
  vector_one.push_back(20);

  cout << "The value in vector one at element position one is: " << vector_one.at(0) << endl;
  cout << "The value in vector one at element position two is: " << vector_one.at(1) << endl;
  cout << "The size of vector one is: " << vector_one.size() << endl;

  cout << endl;
  cout << endl;

  vector_two.push_back(100);
  vector_two.push_back(200);

  cout << "The value in vector two at element position one is: " << vector_two.at(0) << endl;
  cout << "The value in vector two at element position two is: " << vector_two.at(1) << endl;
  cout << "The size of vector two is: " << vector_two.size() << endl;

  //Two dimensional vector
  vector <vector<int>> two_dimensional_vector;

  two_dimensional_vector.push_back(vector_one);
  two_dimensional_vector.push_back(vector_two);

  cout << "The values in a 2D vector" << endl;
  cout << two_dimensional_vector.at(0).at(0) << endl;
  cout << two_dimensional_vector.at(0).at(1) << endl;
  cout << two_dimensional_vector.at(1).at(0) << endl;
  cout << two_dimensional_vector.at(1).at(1) << endl;

  vector_one.at(0) = 1000;
  cout << "Now I will change the first element of vector one" << endl;
  cout << "The values in a 2D vector" << endl;
  cout << two_dimensional_vector.at(0).at(0) << endl;
  cout << two_dimensional_vector.at(0).at(1) << endl;
  cout << two_dimensional_vector.at(1).at(0) << endl;
  cout << two_dimensional_vector.at(1).at(1) << endl;

  cout << "Here's the updated values in vector one" << endl;
  cout << vector_one.at(0) << endl;
  cout << vector_one.at(1) << endl;

  return 0;






}






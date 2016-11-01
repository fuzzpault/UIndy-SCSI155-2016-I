/*
Name: <fill me in>
Date: <fill me in>
Assignment: <fill me in>
Description: <fill me in>
*/
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

void reverse(int array[], int length){
  // Fill me in
}

float mean(float array[], int length){
  // Fill me in
}

float stdev(float array[], int length){
  // Fill me in
}

float add(float array[], int length, float number){
  // Fill me in
}

float mult(float array[], int length, float number){
  // Fill me in
}

void shuffle(float array[], int length){
  // Fill me in
}

vector<int> removeDups(vector<int> array){
  // Fill me in
  return vector<int>();
}

// See below for this function
template<typename T>
string print(T array[], int length);


int main(){
  srand(time(0));   
 
  cout << "reverse" << endl;
  int a1[] = {1,2,3,4,5};
  reverse(a1, 5);
  cout << "[5,4,3,2,1] = " << print(a1, 5) << endl;
  reverse(a1, 5);
  cout << "[1,2,3,4,5] = " << print(a1, 5) << endl;
  int a2[] = {5};
  cout << "[5] = " << print(a2,1) << endl;
  int a3[] = {1,2,4,5};
  reverse(a3, 4);
  cout << "[5,4,2,1] = " << print(a3, 4) << endl;
  int a4[100] = {1,2};
  reverse(a4, 100);
  cout << "0 = " << a4[0] << endl;
  cout << "2 = " << a4[98] << endl;
  
  float f1[] = {5.6, 2.1, 9.9, 125.4};
  float f2[] = {5.6, 5.6, 5.6, 5.6, 5.6, 5.6};
  cout << endl << "mean:" << endl;
  cout << "35.75 = " << mean(f1, 4) << endl;
  cout << "5.6 = " << mean(f2, 6) << endl;
  
  cout << endl << "stdev:" << endl;
  cout << "51.8331 = " << stdev(f1, 4) << endl;
  cout << "0 = " << stdev(f2, 6) << endl;
  
  cout << endl << "add:" << endl;
  add(f1, 4, 89.0);
  cout << "[94.6,91.1,98.9,214.4] = " << print(f1, 4) << endl;
  add(f2, 6, 0.4);
  cout << "[6,6,6,6,6,6] = " << print(f2, 6) << endl;
  
  cout << endl << "shuffle:" << endl;
  shuffle(f1, 4);
  // These should not match, but there is a chance they will.
  cout << "[94.6,91.1,98.9,214.4] != " << print(f1, 4) << endl;
  cout << "51.8331 = " << stdev(f1, 4) << endl;
  
  cout << endl << "removedups:" << endl;
  //vector<int> v1 = {1,2,3,3,4,5,1};  // Not supported in C++98
  vector<int> v1;
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(3);
  v1.push_back(3);
  v1.push_back(4);
  v1.push_back(5);
  v1.push_back(1);
  vector<int> v12 = removeDups(v1);
  cout << "[1,2,3,4,5] = " << print(v12.data(), v12.size()) << endl;
  cout << "5 = " << v12.size() << endl;
  vector<int> v2;
  for(int i = 0; i < 100; i++){
    v2.push_back(i%17 + i %7);
  }
  vector<int> v22 = removeDups(v2);
  cout << "22 = " << v22.size() << endl;
  
  return 0;
}

// A sneaky way to allow 1 function to print any typed array, as long as
// the passed array element can be sent to <<.
// The stringstream allows us to 'print' information to a fake output
// stream, and then get the result as a string.  It's a simple way of
// getting a non-string/character into a string.
// Contense of this function will not be tested in this course!
template<typename T>
string print(T array[], int length){
  stringstream out;
  out << '[';
  for(int i = 0; i < length; i++){
    out << array[i];
    if(i != length-1)out << ',';
  }
  out << ']';
  return out.str();
}


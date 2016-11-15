/* Name: Paul Talaga
   Date: 11/7/16
   Desc: Demo of doing a linear and binary search for a value in a vector
         of sorted numbers.
*/
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void print(vector<int> justin){
  cout << '[';
  for(int i = 0; i < justin.size(); i++){
    cout << justin[i] << ',';
  }
  cout << "]\n\n";
}

int main(){

  vector<int> bigVector;
  const int SIZE = 100; //  1024 * 1024 / 4 * 10
  int last = 0;
  for(int i = 0; i < SIZE; i++){
    int new_number = last + rand() % 10;
    bigVector.push_back(new_number);
    // new_number will always be bigger or == to the one before, so vector
    // will be sorted.
    last = new_number;
  }
  
  print(bigVector);
  
  // Does a linear search for a 50.  Every element is looked at.
  int count = 0;
  for(int i = 0; i < bigVector.size(); i++){
    count++;
    if(bigVector[i] == 50){
      cout << "Found a 7 in index " << i << endl;
    }
  } 
  cout << "We did " << count << " comparisons." << endl;
  
  count = 0;
  
  
  int to_find = bigVector[bigVector.size()-1];
  int start = 0;
  int end = bigVector.size() - 1;
  while(end >= start){
    int middle = start + (end - start) / 2;
    count++;
    if( bigVector[middle] == to_find){
      cout << "Found a " << to_find << " in index " << middle << endl;
      break;
    }
    if(bigVector[middle] > to_find){
      end = middle - 1;
    }else{
      start = middle + 1;
    }
    
  }
  cout << "We did " << count << " comparisons." << endl;

}

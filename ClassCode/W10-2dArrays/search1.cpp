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
    last = new_number;
  }
  
  print(bigVector);
  
  int count = 0;
  for(int i = 0; i < bigVector.size(); i++){
    count++;
    if(bigVector[i] == 50){
      cout << "Found a 7 in index " << i << endl;
    }
  } 
  cout << "We did " << count << " comparisons." << endl;

}

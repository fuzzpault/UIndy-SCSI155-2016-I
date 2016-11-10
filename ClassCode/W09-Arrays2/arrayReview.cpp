#include <iostream>

using namespace std;

const int SIZE1 = 10;
const int SIZE2 = 10;

int main(){
  string thing[SIZE1] = {"bob"}; // Valid indexes 0..99
  int thing2[SIZE2] = {5};
  
  for(int i = 0; i < SIZE2; i++){
    thing2[i] = 5;
  }
  
  for(int i = 0; i < SIZE1; i++){
    cout << i << ":" << thing[i] << endl;
  }
  for(int i = 0; i < SIZE2; i++){
    cout << i << ":" << thing2[i] << endl;
  }
  
  return 0;
}

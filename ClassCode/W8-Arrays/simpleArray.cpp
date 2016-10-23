/* Name: Paul Talaga
   Date: 10/21/16
   Desc: Demonstration of creating an array of ints 100 elements long, 
         filling it via a for loop, changing the elements inside,
         and printing all the values back out.
*/
#include <iostream>

using namespace std;

int main(){
  int bob[100];  // Creates an array capable of holding 100 values
                 // Valid indexes are 0..99
  
  for(int i = 0; i < 100; i++){
    bob[i] = i * 2;
  }
  
  // Note the change of bounds so we don't access outside the array.
  for(int i = 0; i < 95; i++){ 
    bob[i] = bob[i+5] - 10;
  }
  
  for(int i = 0; i < 100; i++){
    cout << i << ":" << bob[i] << endl;
  }
  
  return 0;
}

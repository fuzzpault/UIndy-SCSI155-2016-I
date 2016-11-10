/* Name: Paul Talaga
   Date: 10/21/16
   Desc: Arrays in C do not know their size, and there is no way to find out,
         so when sending arrays, we must also send the size of the array
         otherwise we'll go off the end and cause a segmentation fault 
         (going outside your memory segment).
*/
#include <iostream>

using namespace std;

// Setting an array size to a constant global is a good way of coding so 
// if you need a bigger array you just change one line, other than thinking
// you got them all, but didn't!
const int SIZE = 100;

// A function to initialize all values in an array to a value.
void init(int array[], int size, int value){
  for(int i = 0; i < size; i++){
    array[i] = value;
  }
}

// A function to print out all values in an array.
void print(int array[], int size){
  for(int i = 0; i < size; i++){
    cout << i << ":" << array[i] << endl;
  }
}

int main(){
  int bob[SIZE];  

  init(bob, SIZE, 5);
  
  print(bob, SIZE);
  // Can we access negative indexes?  Yes, but it will be garbage!
  cout << "-10 " << bob[-10] << endl;
  
  return 0;
}

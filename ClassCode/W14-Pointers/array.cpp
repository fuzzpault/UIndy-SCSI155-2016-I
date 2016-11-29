/* Name: Paul Talaga
   Date: 11/28/16
   Desc: Demonstrates the relationship between pointers and arrays.
*/
#include <iostream>

using namespace std;

int main(){

  int a[10] = {6,7,8};
  // An array is really a pointer to the first element, so the next line
  // work and points to the 6.
  int* b = a;
  // Change the first element in a to 100
  *b = 100;
  // Change the index 2 (3rd element) to 150
  *(b+2) = 150; // this is exactly a[2]
  // Change the index 3 to 200
  // Even though b is a pointer, this works since an array is really a pointer.
  b[3] = 200;
  
  // Adding (or subtracting) arbitrary numbers to pointers is possible,
  // but they 'know' how big each type/element is.
  // Thus b+2 will be 8 more than b, since an int is 4 bytes.
  cout << b << " and " << b + 2 << endl;
  
  // Print the array a now.
  for(int i = 0; i < 10; i++){
    cout << i << ": " << a[i] << endl;
  }
  
  

  return 0;
}

/* Name: Paul Talaga
   Date: 10/21/16
   Desc: Demonstration that elements in an array are actually next to one another in memory.
         The & before a variable will give it's memory location, so by printing out all the
         memory addresses of all elements in an array, you can see where they are.  Depending
         on what type of array you create (bool, short, int, string) the size of each element
         will be different and thus the addresses of each element will be that many bytes apart.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  
  float a[10]; // Change type to see how 'big' they are
  
  // This also shows what value (random) will be in an uninitialized array.
  a[2] = 7.77;
  a[5] = 8.88;
  
  for(int i = 0; i < 10; i++){
    cout << setw(3) << i << ": " << setw(15) << a[i] << " addr: " << &(a[i]) <<  endl;
  }
  
  return 0;
}

/* Name: Paul Talaga
   Date: 10/21/16
   Desc: Demonstration of something you should NEVER do.
         The size of the array a is not known at compile time, but only
         at run-time.  This will work on SOME systems, but not all, so
         don't get into the habit of doing it.  You should use memory
         on the heap, or use a STL Vector, if you need an array sized
         at runtime.
*/
#include <iostream>

using namespace std;

int main(){
  
  int size = 10;
  cin >> size;
  float a[size]; 
  
  for(int i = 0; i < size; i++){
    a[i] = i * 2;
  }
  
  for(int i = 0; i < size; i++){
    cout << i << ": " << a[i] <<  endl;
  }
  
  return 0;
}

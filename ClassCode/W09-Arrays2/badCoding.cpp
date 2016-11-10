/* Name: Paul Talaga
   Date: 10/24/16
   Desc: Demonstration of how bad array indexes can change unintended
         variables.  By finding the locations of variables in memory, 
         we can give BAD indexes to change them.
         YOU SHOULD NEVER DO THIS!
         This MAY not work on your machine as variable location is not
         part of the C/C++ standard.
*/
#include <iostream>

using namespace std;

int main(){
  int a = 5;
  int b[] = {1,2,3};
  int c = 6;
  
  cout << &a << " " << b << " " << &c << endl;
  cout << "c: " << c << endl;
  //b[3] = 8; // This will change a
  b[-1] = 8;  // This will change c
  cout << "c: " << c << endl;
}

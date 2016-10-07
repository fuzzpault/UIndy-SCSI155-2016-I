/* Name: Paul Talaga
   Date: 10/6/16
   Desc: An example of a global variable b.  It is accessable in all functions.  Generally
         a bad programing practice except for constants.
*/
#include <iostream>

using namespace std;

int myFunction(int a);

// Global variable b
int b = 10;
//b = b + 1;

int main(){
  // Local variables: a
  // Global variable: b
  int a = 5;
  //int b = 10;
  b = 10;
  //cout << myFunction(a);
  cout << a << endl;
  cout << "b: " << b << endl;
}

// pass-by-value
int myFunction(int a){
  // Local variables: a
  // Global variable: b
  b = b + 1;
  return 5;
}

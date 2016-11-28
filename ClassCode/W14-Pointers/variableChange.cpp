/* Name: Paul Talaga
   Date: 11/28/16
   Desc: Demonstrates how a variable can be updated via a pointer
         without using the variable.
*/
#include <iostream>

using namespace std;

int main(){

  int a = 5;
  // Create a pointer that points to the a.
  int* ap = &a; 
  
  cout << a << " is at " << &a << endl;
  cout << ap << " is at " << &ap << " and points to " << *ap << endl;
  
  // Dereference the ap pointer (which points to a), and set it = to 10.
  *ap = 10;
  
  cout << a << " is at " << &a << endl;
  

  return 0;
}

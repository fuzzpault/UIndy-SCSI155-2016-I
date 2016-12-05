/* Name: Paul Talaga
   Date: 12/05/16
   Desc: Don't double delete a pointer to memory on the
         stack or a segfault will occur!
*/
#include <iostream>

using namespace std;

int main(){
  int b = 10;
  int* a = &b;
  *a = 55;
  cout << "a: " << a << " *a: " << *a << endl;
  cout << "&b: " << &b << " b: " << b << endl;
  
  //delete a;  // Don't delete something on the stack
  a = NULL;
  //delete a; // don't double delete
  // Don't dereference a null pointer
  cout << "a: " << a << endl; // " *a: " << *a << endl;
  
  
  return 0;
  
}

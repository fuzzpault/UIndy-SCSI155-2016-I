/* Name: Paul Talaga
   Date: 11/29/16
   Desc: Using the & operator to get the address of a variable,
         and using the * operator to dereference a pointer.
*/
#include <iostream>

using namespace std;

int main(){
  int a = 5;
  int b = 10;
  
  int* p =0;
  
  cout << a << " is at " << &a << endl;
  cout << b << " is at " << &b << endl;
  cout << p << " is at " << &p << endl;
  
  cout << *p << endl;
  
  return 0;
}

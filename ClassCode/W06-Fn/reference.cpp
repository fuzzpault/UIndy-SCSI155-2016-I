/* Name: Paul Talaga
   Date: 10/6/16
   Desc: Example of passing a variable by reference.  The a and b in main will
         change because myFunction2 changes value and v2 (it is based on position,
         not variable name).
*/
#include <iostream>

using namespace std;

// pass-by-value
int myFunction(int a){
  a = a + 1;
  return a;
}

// pass-by-reference
int myFunction2(int& value, int& v2){
  cout << "value address: " << &value << " v2 address: " << &v2 << endl;
  value = value + 1;
  v2 = v2 + 1;
  return value;
}

int main(){
  int a = 5;
  int b = 10;
  cout << "a address: " << &a << " b address: " << &b << endl;
  cout << myFunction2(a, b);
  cout << a << endl;
  cout << "b: " << b << endl;
}

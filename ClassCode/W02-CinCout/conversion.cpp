/* Name: Paul Talaga
   Date: 9/8/16
   Desc: Conversion between number/integer type example.
*/
#include <iostream>

using namespace std;

int main(){
  // Convert from small size to larger;
  // These are all signed numbers
  short a = 41;
  int b = a;
  long c = b;
  
  cout << "a: " << a <<  " b: " << b << " c: " << c << endl;
  cout << "a size: " << sizeof(a) <<  " b size: " << sizeof(b) << " c size: " << sizeof(c) << endl;
  
  // Convert from large to small with a small number
  c = 1234;
  b = c;
  a = b;
  cout << "a: " << a <<  " b: " << b << " c: " << c << endl;

  
  // Convert from large to small with a large number
  c = 1234567891;
  b = c;
  a = b;
  cout << "a: " << a <<  " b: " << b << " c: " << c << endl;
  // a should be wrong, because 1234567891 is too large for a short, which is 2 bytes.
  
  return 0;
}

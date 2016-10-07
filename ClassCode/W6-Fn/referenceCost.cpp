/* Name: Paul Talaga
   Date: 10/6/16
   Desc: Demonstration of how call-by-reference works, by printing the location in memory
         (address) of the variables.
         Note a const reference will flag an error if you try to change it, giving some safety
         with the original variable (a and b in main).
*/
#include <iostream>

using namespace std;

// pass-by-value
int myFunction(int a){
  a = a + 1;
  return a;
}

// pass-by-reference
int myFunction2(const int& value,const int& v2){
  cout << "value address: " << &value << " v2 address: " << &v2 << endl;
  //value = value + 1;  // Can't change value or it won't compile!
  //v2 = v2 + 1;
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

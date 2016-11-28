/* Name: Paul Talaga
   Date: 11/28/16
   Desc: Demo of finding the address (&) of variables in memory.
*/
#include <iostream>

using namespace std;

int main(){

  int a = 5;
  bool b = true;
  string word = "frustrated";
  
  cout << a << " is at " << &a << endl;
  cout << b << " is at " << &b << endl;
  cout << word << " is at " << &word << endl;

  return 0;
}

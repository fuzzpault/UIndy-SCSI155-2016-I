/* Name: Paul Talaga
   Date: 10/4/16
   Desc: Pass-by-reference example.  When 'n' is incremented in cat, the 'a' also
         changes because the 'n' is really a 'portal' to 'a'.
         The & in the paramter list changes to pass-by-reference mode.
         The & on line 16 and 23 prints out the memory addresses of the variables,
         showing you they are stored in the same locations in memory.
*/
#include <iostream>

using namespace std;

void cat(int& n){
  cout << "I have " << n << " cats" << endl;
  n = n + 1;
  cout << "n location: " << &n << endl;
}


int main(){
  int a = 5;
  cout << "a location: " << &a << endl;
  //value = 10;
  cat(a);
  cout << "a: " << a << endl;
  return 0;
}

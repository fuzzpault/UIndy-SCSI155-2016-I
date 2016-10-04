/* Name: Paul Talaga
   Date: 10/4/16
   Desc: Demonstrating the default parameter passing method pass-by-value.
         When a function is called, its parameters are COPIED into new variables
         in the function, so a change in the function does not effect the original
         variable.
*/
#include <iostream>

using namespace std;

void cat(int n){
  cout << "I have " << n << " cats" << endl;
  n = n + 1;
}


int main(){
  int a = 5;
  //value = 10;
  cat(a);
  cout << "a: " << a << endl;
  return 0;
}

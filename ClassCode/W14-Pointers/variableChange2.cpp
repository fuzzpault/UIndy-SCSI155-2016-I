/* Name: Paul Talaga
   Date: 11/29/16
   Desc: Changing variables using pointers.
*/

#include <iostream>

using namespace std;


int main(){
  int a = 10;
  int* b = &a;
  int c = 50;
  cout << "a: " << a << endl;
  *b = 20;
  b = &c;
  *b = 100;
  cout << "a: " << a << endl;
  cout << "c: " << c << endl;
 
  
  return 0;
}

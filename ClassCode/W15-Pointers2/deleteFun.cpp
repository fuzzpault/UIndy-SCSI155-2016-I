/* Name: Paul Talaga
   Date: 12/05/16
   Desc: Don't double delete a pointer or a segfault will occur!
*/
#include <iostream>

using namespace std;

int main(){
  int* a = new int;
  *a = 55;
  cout << "a: " << a << " *a: " << *a << endl;
  
  delete a;
  a = NULL;
  //delete a; // don't double delete
  cout << "a: " << a << " *a: " << *a << endl;
  
  return 0;
  
}

/* Name: Paul Talaga
   Date: 11/29/16
   Desc: Using the & operator to get the address of a variable,
         and using the * operator to dereference a pointer.
*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  int *a = (int*)malloc(sizeof(int));
  *a = 5;
  cout << *a << endl;
  
  free(a);
  
  return 0;
}

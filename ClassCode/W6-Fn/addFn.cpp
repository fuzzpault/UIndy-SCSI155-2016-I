/* Name: Paul Talaga
   Date: 10/6/16
   Desc: Example of nesting functions.
*/
#include <iostream>
#include <string>

using namespace std;

int add(int a, int b){
  cout << "Add: " << a << " + " << b << endl;
  return a + b;
}

int sub(int a, int b){
  cout << "Sub: " << a << " - " << b << endl;
  return a - b;
}

int main(){
  cout << add( sub(10,1) ,7) << endl;
  
  return 0;
}

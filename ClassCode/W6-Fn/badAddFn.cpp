/* Name: Paul Talaga
   Date: 10/6/16
   Desc: This will not work properly because the add function does not return anything, even
         though it has a return type of int.  This will compile, but output a random (wrong)
         number.  This is a failure of the language to warn us!
*/
#include <iostream>
#include <string>

using namespace std;

int add(int a, int b){
  cout << "Add: " << a << " + " << b << endl;
}

int sub(int a, int b){
  cout << "Sub: " << a << " - " << b << endl;
  return a - b;
}

int main(){
  cout << add( sub(10,1) ,7) << endl;
  
  return 0;
}

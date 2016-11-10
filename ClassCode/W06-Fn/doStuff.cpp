/* Name: Paul Talaga
   Date: 10/4/16
   Desc: Example of function overloading.  Two functions with the same name but different
         input parameter types.
*/
#include <iostream>
#include <string>

using namespace std;

void doStuff(string a ){
  cout << "Doing more Stuff " << a << endl;
}

void doStuff(int i){
  cout << "Doing stuff " << i << endl;
  //doStuff(i+1);
  cout << "Bla " << i << endl;
}

int main(){
  doStuff(55);
  doStuff("bla");
}

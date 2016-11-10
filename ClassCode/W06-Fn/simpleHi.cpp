/* Name: Paul Talaga
   Date: 10/6/16
   Desc: Example of a void function, called multiple times in a loop.
*/
#include <iostream>

using namespace std;

void sayHi(){
     cout << "Hi " << endl;
}

int main(){
    for(int i = 0; i < 10; i++){
      sayHi();
    }
    return 0;
}

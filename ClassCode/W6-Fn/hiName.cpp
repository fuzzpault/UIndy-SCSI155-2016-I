/* Name: Paul Talaga
   Date: 10/6/16
   Desc: An example of passing multiple parameters to a function.
*/
#include <iostream>
#include <string>

using namespace std;

void sayHi(string name, int times){
     for(int i = 0; i < times; i++){
       cout << i << ": Hi " << name << endl;
     }
}

int main(){
    sayHi("Bob", 7);
    sayHi("Bob", 7);
    return 0;
}

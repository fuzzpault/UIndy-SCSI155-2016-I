/* Name: Paul Talaga
   Date: 10/4/16
   Desc: As written this will not work as sayHi is not declared before it is used.  If the 
         prototype is uncommened on line 11 it will work.
*/
#include <iostream>
#include <string>

using namespace std;

//void sayHi(string name, int times);

int main(){
    string n = "Bob";
    sayHi(n, 7);
    sayHi(n, 7);
    cout << n << endl;
    return 0;
}

// Pass by value, makes a copy
void sayHi(string name, int times){
     name = "Mary";
     for(int i = 0; i < times; i++){
       cout << i << ": Hi " << name << endl;
     }
}

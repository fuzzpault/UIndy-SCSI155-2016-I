/* Name: Paul Talaga
   Date: 10/6/16
   Desc: This a bad overload becase even though there are two functions with the same name
         and different parameters (one int, one float), C++ can convert between the two and
         so does not know which to use.
*/
#include <iostream>
#include <string>

using namespace std;

// Pass by value, makes a copy
void sayHi(string name, int times){
     for(int i = 0; i < times; i++){
       cout << i << ": Hi " << name << endl;
     }
}

// Pass by value, makes a copy
void sayHi(string name, float times){
     for(int i = 0; i < times; i++){
       cout << i << ": Hi " << name << endl;
     }
}

int main(){
    string n = "Bob";
    sayHi(n, 7);
    sayHi(n, 8.8);
    return 0;
}



/* Name: Paul Talaga
   Date: 10/6/16
   Desc: An example of function overloading.  2 functions with the same name, but different
         input parameters.  The compiler will choose the correct one based on the number and
         types of inputs.
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
void sayHi(string name){
     cout << ": Hiiiii " << name << endl;
}

int main(){
    string n = "Bob";
    sayHi(n, 7);
    sayHi(n);
    return 0;
}



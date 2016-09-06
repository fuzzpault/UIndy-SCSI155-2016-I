/* Name: Paul Talaga
   Date: 9/1/16
   Desc: What happends if you get too large?
*/

#include <iostream>

using namespace std;


int main(){
    unsigned a = 0; // Watch what happens around 4 billion
    //int a = 0; // Watch what happens around 2 billion
    while(true){ // This will loop forever!
      cout << a << endl;
      a = a + 600000;   // Arbitrary increment to reach the limits in a few seconds.
    }

    return 0;

}

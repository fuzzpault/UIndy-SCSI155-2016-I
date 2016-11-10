/* Name: Paul Talaga
   Date: 9/9/16
   Desc: Preincrement, postincrement, and shortcut operations.
         Uncomment/comment to see behavior.
*/
#include <iostream>

using namespace std;

int main(){
    int a = 0;
    // ++a - preincrement
    // a++ - postincrement   a = a + 1
    cout << ++a << endl;
    //a++;
    //++a;
    //a += 5; // same as a = a + 5
    //a *= 10;
    cout << ++a << endl;
    //a++;
    //++a;
    //a += 5;
    cout << ++a << endl;
    
    return 0; 
}

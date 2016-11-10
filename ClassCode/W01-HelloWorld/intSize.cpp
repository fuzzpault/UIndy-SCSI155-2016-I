/* Name: Paul Talaga
   Date: 9/1/16
   Desc: Signed integer sizes.
*/

#include <iostream>

using namespace std;


int main(){
    short a = 5;
    int b = -5;
    long c = 10;
    cout << "short size in bytes: " << sizeof(a) << endl;
    cout << "int size in bytes: " << sizeof(b) << endl;
    cout << "long size in bytes: " << sizeof(c) << endl;

    return 0;

}

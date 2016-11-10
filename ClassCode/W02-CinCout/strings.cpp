/* Name: Paul Talaga
   Date: 9/1/16
   Desc: Strings are really arrays of characters.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string temp = "Bacon and Eggs";
    temp[3] = 'z';       // Put a 'z' character in the 4th spot, index 3
    cout << temp << endl;

    return 0;

}

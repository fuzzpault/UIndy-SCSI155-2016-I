/* Name: Paul Talaga
   Date: 9/1/16
   Desc: Characters are numbers, so we can print the alphabet
         by converting a number to a character.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    // Start at 65, and go to 125 (We'll get to for loops later)
    for(int i = 65; i < 126; i++){
      cout << (char)i << ", ";    // Conversion is important, otherwise
                                  // it will print the number.
    }

    return 0;

}

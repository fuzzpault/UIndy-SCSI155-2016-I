/* Name: Paul Talaga
   Date: 9/1/16
   Desc: Characters are numbers, so we can print the alphabet
         by converting a number to a character.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int temp = 0;
    // Start at 65, and go to 125 (We'll get to for loops later)
    // We removed 65 below and put in 'A', and thus removed the 'magic number'
    for(int i = 'A'; i < 'Z'; i++){

      cout << (char)i << ", ";    // Conversion is important, otherwise
      cout << temp;                           // it will print the number.
    }

    return 0;

}

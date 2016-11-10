/* Name: Paul Talaga
   Date: 9/15/16
   Desc: Ternary example, with equivalent if/else.
*/
#include <iostream>

using namespace std;

int main(){
  int input = 0;
  int number = 5;
  cin >> input;
  number = input > 10 ? 100 : 0;
  // Line 9 is the same as this if/else below.
  if(input > 10){
    number = 100;  
  }else{
    number = 0; 
  }
  cout << "Input: " << input << " number: " << number << endl;
  
  return 0;
}

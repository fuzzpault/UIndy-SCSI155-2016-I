/* Name: Paul Talaga
   Date: 9/13/16
   Desc: Conditionals and boolean expressions.
*/

#include <iostream>

using namespace std;

int main(){
  int number = 0;
  cout << "Enter an Integer:";
  cin >> number;
  if(number < 50){
     cout << "That's less than 50!\n"; 
  }
  if(number % 2 == 0){
    cout << "That's even!\n"; 
    cout << "That's still even.\n";
  }else{
    cout << "That is odd\n"; 
  }
  
  if(number){     // Will be false only when number is 0
    cout << "number was true\n"; 
  }
  
   
   return 0;
}

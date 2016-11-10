/* Name: Paul Talaga
   Date: 9/13/16
   Desc: Using cin to influence choice.  Example of nested if statements.
         Doing input validaion with an else.
*/
#include <iostream>

using namespace std;

int main(){
  int answer = 0;
  cout << "Do you want a coffee? (0/1)\n";
  cin >> answer;
  if(answer == 1){
    cout << "Ok, how many?\n";
    cin >> answer;
    cout << "That will cost $" << 1.65 * answer << endl; 
    cout << "Do you still want to buy it?" << endl;
    cin >> answer;
    if(answer == 1){
      cout << "Sorry, we are out!" << endl; 
    }else{
      cout << "Fine, I didn't want your money anyway.\n";
    }
  }else if(answer == 0){
    cout << "Ok, you don't want coffee\n";
  }else{
    cout << "That wasn't a valid answer!\n";
  }
    
 return 0; 
}

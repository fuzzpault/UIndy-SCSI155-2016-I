/* Name: Paul Talaga
   Date: 9/15/16
   Desc: Switch example, with equivalent if/elseif/else.
*/
#include <iostream>

using namespace std;

int main(){
  int input = 0;
  cout << "Enter your favorite number." << endl;
  cin >> input;
  switch(input){
    case 2:
      cout << "2 got hit" << endl;
    case 3:
      cout << "3 got hit" << endl;
    default:
      cout << "default got hit" << endl;
  }
  if(input == 2){
    cout << "if 2 got hit" << endl; 
  }else if(input == 3 || input == 2){
    cout << "if 3 got hit" << endl;
  }//else{
    cout << "if default got hit" << endl; 
  //}
  
}

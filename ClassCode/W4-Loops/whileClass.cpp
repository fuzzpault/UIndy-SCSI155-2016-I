/* Name: Paul Talaga
   Date: 9/15/16
   Desc: Using a while loop to get repeated input.
*/
#include <iostream>

using namespace std;

int main(){
  int input = 0;
  while(input == 0){
    cout << "Do you want to go to class today? 0/1" << endl;
    cin >> input;
    if( input == 0  ){
      cout << "That's not smart." << endl; 
    }else{
      cout << "Ok, but don't fall asleep." << endl;
    } 
  }
  
  return 0;
}

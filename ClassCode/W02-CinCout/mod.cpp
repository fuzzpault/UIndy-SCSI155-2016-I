/* Name: Paul Talaga
   Date: 9/9/16
   Desc: Is a number a multiple of 11?
*/

#include <iostream>
#include <string>


using namespace std;

int main(){
  int number = 0;
  cout << "Enter an integer:" << endl;
  cin >> number;
  if(number % 11 == 0){
    cout << "That is a multiple of 11!" << endl;
  }else{
    cout << "That is not a multiple of 11!" << endl;
  }
  
  
  return 0;
}



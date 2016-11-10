/* Name: Paul Talaga
   Date: 9/15/16
   Desc: Different ways of printing out the even numbers less than 100.
*/
#include <iostream>

using namespace std;

int main(){
  int number = 1000;
  
  while(number < 100){
    if(number % 2 == 0){
      cout << "V1: " << number << endl;
    }
    number++;
  }
  
  return 0;
  
  number = 0;
  while(number < 100){
    cout << "V2: " << number << endl;
    number+=2;
  }
  
  number = 0;
  while(number < 50){
    cout << "V3: " << number * 2 << endl;
    number++;
  }
  
  return 0;
}

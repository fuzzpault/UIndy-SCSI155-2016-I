/* Name: Paul Talaga
   Date: 9/15/16
   Desc: Example of do/while.
         The loop body will execute once, even though the conditional is false.
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
  int number = 100;
  do{
     cout << "number: " << number << endl;
     number++;  
  }while(number < 10);
 
  return 0; 
}

/* Name: Paul Talaga
   Date: 9/16/16
   Desc: Number game in-class activity:

Write a math game.  Present the user with 2 random 2-digit integer numbers 
and ask them to add them.  
Have them enter the sum.  Tell them if it is correct, or if not the actual answer.

By default use 2 2-digit numbers.  Add a difficulty question at the beginning 
which is the number of digits the numbers should be (up to 6).  Exit if they 
enter a difficulty > 6

Can you modify it so it randomly picks the operation? (+, -, *)?

Can you also have it display the time it took them to do the problem? time(0)

*/

#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main(){
  srand(time(0));
  int n1 = (rand() % 90) + 10;   //10... 99
  int n2 = (rand() % 90) + 10;
  int answer = 0;
  unsigned start_time = time(0);
  
  int operation = rand() % 3; // +, -, *
  
  if( operation == 0){  // +
    cout << "What is " << n1 << " + " << n2 << "?" << endl;
    cin >> answer;
    
    if(answer == n1 + n2){
      cout << "That's correct!" << endl; 
    }else{
      cout << "Not correct, the sum is: " << n1 + n2 << endl; 
    }
 }else if( operation == 1){  // -
    cout << "What is " << n1 << " - " << n2 << "?" << endl;
    cin >> answer;
    
    if(answer == n1 - n2){
      cout << "That's correct!" << endl; 
    }else{
      cout << "Not correct, the difference is: " << n1 - n2 << endl; 
    }
 }else{  // *
    cout << "What is " << n1 << " * " << n2 << "?" << endl;
    cin >> answer;
    
    if(answer == n1 * n2){
      cout << "That's correct!" << endl; 
    }else{
      cout << "Not correct, the product is: " << n1 * n2 << endl; 
    }
 }
 cout << "That took you " << time(0) - start_time << " seconds." << endl;
  
  
  return 0;  
}

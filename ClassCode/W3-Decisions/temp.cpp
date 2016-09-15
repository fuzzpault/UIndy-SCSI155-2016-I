/* Name: Paul Talaga
   Date: 9/15/16
   Desc: Temperature calculator.
*/
#include <iostream>

using namespace std;

int main(){
 float temp_f = 0.0;
 //float temp_c = 0.0;          // Variable not needed if we do calculation in cout
 cout << "Welcome to temp converter.  Give me a F temperature." << endl;
 cin >> temp_f;      
 //cout << "The temperature in C is: " << (temp_f - 32) * 5/9 << endl;
 cout << "The temperature in C is: " << (temp_f - 32) * (5.0/9) << endl;
 if(temp_f < 32){
   cout << "This is tooooo cold!" << endl;
 }else if(temp_f > 85){
   cout << "This is toooo hot!" << endl;
 }else{             // With else, there is no needs for complex bounds checking
   cout << "This is just right." << endl;
 }
 
 //if(-100 < temp_f < -10){     // Will not work correctly
 // This is OK as well, as long as you get the ranges correct.
 if(32 <= temp_f && temp_f <= 85){
   cout << "This is just right." << endl;
 }
 
 
 return 0; 
}

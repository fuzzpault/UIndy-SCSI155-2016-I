/* Name: Paul Talaga
   Date: 9/15/16
   Desc: Possible solution to temp.cpp quiz that uses multiple ifs
*/
#include <iostream>

using namespace std;

int main(){
  cout << "Enter your degrees in F" << endl;
  float f_temp = 0.0;
  float c_temp = 0.0;
  cin >> f_temp;
  cout << "You entered " << f_temp << " F" << endl;
  c_temp = (f_temp - 32) * (5.0 / 9);
  cout << "that is " << c_temp << " C" << endl;    
  
  cout << "that is " << (f_temp - 32) * (5.0 / 9) << " C" << endl;
  
  if(f_temp <= 32){
    cout << "That's cold, but a good temperature!" << endl;
  }
  if(f_temp >= 85){
    cout << "That's waaaaaaaaaaaay toooooo hot." << endl; 
  }
  if(32 < f_temp && f_temp < 85){ //   32 < f_temp < 85
  //if(-100 < f_temp  < -10){ //   32 < f_temp < 85
    cout << "This just right." << endl;
  }
  
  return 0; 
}

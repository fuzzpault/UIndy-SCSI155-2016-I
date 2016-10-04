/* Name: Paul Talaga
   Date: 10/4/16
   Desc: Print out grade to letter grade conversion using 2 functions to minimize
         code.
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string plusMinus(float v){
  v = fmod(v, 10);
  if(v > 6){
    return "+";
  }else if(v > 3){
    return "";
  }
  return "-";
  
}

string getGrade(float value){
  if(value >= 95.0){
    return "A";
  }else if(value >= 90.0){
    return "A" + plusMinus(value);
  }else if(value >= 80.0){
    return "B" + plusMinus(value);
  }else if(value >= 70.0){
    return "C" + plusMinus(value);
  }else if(value >= 60.0){
    return "D" + plusMinus(value);
  }
  return "F";
}

int main(){
  for(float g = 100; g > 40; g = g - 1){
    cout << "Score: " << g << " Grade: " << getGrade(g) << endl;
  }
}

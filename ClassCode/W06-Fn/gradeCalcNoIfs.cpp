/* Name: Paul Talaga
   Date: 10/4/16
   Desc: Print out grade to letter grade conversion without using many ifs.
         We manipulate ASCII values to generate the different letters,
         but note that the 'F' range is incorrect since 'E' is after 'D'.
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

int main(){
  for(float g = 100; g > 40; g = g - 1){
    //cout << "Score: " << g << " Grade: " << getGrade(g) << endl;
    cout << "Score: " << g ;
    cout << " Grade: " << (char)((100 - g - 1)/10 + 'A') ;
    cout << plusMinus(g) << endl;
  }
}

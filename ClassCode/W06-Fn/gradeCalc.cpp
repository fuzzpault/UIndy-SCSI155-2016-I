/* Name: Paul Talaga
   Date: 10/4/16
   Desc: Print out grade to letter grade conversion using 2 functions to minimize
         code.
*/
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

string sign(float grade){
  grade = fmod(grade, 10);
  if(grade >= 20/3){
    return "+";
  }else if(grade <= 10/3){
    return "-";
  }else{
    return "";
  }
}

string courseGrade2(float grade){
  if(grade >= 95){
    return "A";
  }else if(grade >= 90.0){
    return "A" + sign(grade);
  }else if(grade >= 80.0){
    return "B" + sign(grade);
  }else if(grade >= 70.0){
    return "C" + sign(grade);
  }else if(grade >= 60.0){
    return "D" + sign(grade);
  }
  return "F";
}

string courseGrade(float grade){
 exit(0);
 cout << grade << " is " << (char)(100 - (int)grade + 'A') << endl;
 return "";
}

int main(){
  for(float x = 100.0; x > 50; x = x - 0.1){
    cout << "Score: " << x << " Grade: " << courseGrade(x) << endl;
  }
}

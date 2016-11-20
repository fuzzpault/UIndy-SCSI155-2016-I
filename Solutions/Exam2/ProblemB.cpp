/* Name: Paul Talaga
   Date: 11/20/16
   Desc: Exam 2 - Problem B

Develop a function to return the letter grades for a vector of numeric  scores.

Use the following function prototype:

vector<char> letterGrade(vector<float> grade);

The first function parameter is a vector containing floating-point values of student grades from 0 to 100.

Your job is to return a new vector containing letter grades according to the following table:
A: [90-100]
B: [80-90)
C: [70-80)
D: [60-70)
F: [0-60)
U: Any other float value.
Note there is no rounding and a B goes all the way up to 89.999, but not 90.

*/

#include <iostream>
#include <vector>
using namespace std;


vector<char> letterGrade(vector<float> grade){
  vector<char> ret;
  for(int i = 0; i < grade.size(); i++){
    char r = 'U';
    if(grade[i] >= 90.0 && grade[i] <= 100.0){
      r = 'A';
    }else if(grade[i] >= 80.0 && grade[i] < 90.0){
      r = 'B';
    }else if(grade[i] >= 70.0 && grade[i] < 80.0){
      r = 'C';
    }else if(grade[i] >= 60.0 && grade[i] < 70.0){
      r = 'D';
    }else if(grade[i] >=  0.0 && grade[i] < 60.0){
      r = 'F';
    }
    ret.push_back(r);
    // Alternatively you could have done push_back in each if/else if statement.
  }
  return ret;
}


int main(){
     vector<float> grades;
     grades.push_back(78);
     grades.push_back(88);
     grades.push_back(34);
     grades.push_back(96);
     grades.push_back(-10);
     grades.push_back(65);
     
     vector<char> letters = letterGrade(grades);
     
     for(int i = 0; i < grades.size(); i++){
       cout << grades[i] << " is a " << letters[i] << endl;
     }
     
     return 0;
}

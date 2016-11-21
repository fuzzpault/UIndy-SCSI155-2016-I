/* Name: Paul Talaga
   Date: 11/20/16
   Desc: Exam 2 - Second code tracing
*/
#include <iostream>
#include <vector>
using namespace std;


int function1(vector<int> a, int b[], vector<int>& c){


     c.push_back(8);
     b[3] = 2;
     a.push_back(2);
     return c[1];
     b[0] = 9;
}


int main(){
     int s1[] = {0,6,7,8};
     int s2[10] = {};
     vector<int> s3;
     vector<int> s4;


     s3.push_back(0);
     s3.push_back(0);
     s4.push_back(99);


     int s5 = function1(s3, s1, s4);
     // There was a bug in the exam.  s3[0] was written as s3, which won't compile.
     cout << s3[0] << endl << s4[0] << endl << s4[1] << endl; 
     cout << s3.size() << endl;
}

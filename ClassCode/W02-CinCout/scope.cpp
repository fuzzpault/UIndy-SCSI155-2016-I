/* Name: Paul Talaga
   Date: 9/8/16
   Desc: Scope example.  Can you guess what this will print?
         Expect a question like this on the exam!
*/

#include <iostream>
#include <string>


using namespace std;

int blob = 5;

int b(){
  cout << blob << endl;
}

int main(){
  string name = "Bob";
  
  {
    cout << name << endl;
    string name = "Alice";
    cout << name << endl;
    {
      cout << name << endl;
    }
  }
  name = "Mary";
  cout << name << endl;
  
  blob++;
  b();
  
  return 0;
}



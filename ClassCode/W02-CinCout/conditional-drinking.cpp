/* Name: Paul Talaga
   Date: 9/9/16
   Desc: Can you legaly drink now?  Uses conditionals to respond
         with different responses, as well as use math to tell you
         in how many years you need to wait.
*/

#include <iostream>
#include <string>


using namespace std;

// Use a constant so if the drinking age changes, just change it once
// and the other calculations will work.
const short DRINK_AGE = 21;

int main(){
  string name = "Bob";
  cout << "What is your name?" << endl;
  cin >> name;
  cout << "Hi " << name << endl;
  
  cout << "What is your age?" <<endl;
  short age = 0;  
  cin >> age;
  if(age < DRINK_AGE){
    cout << "You can legaly drink in " << DRINK_AGE - age << "years." << endl;
  }else{
    cout << "You can drink right now!" << endl;
  }
  
  return 0;
}



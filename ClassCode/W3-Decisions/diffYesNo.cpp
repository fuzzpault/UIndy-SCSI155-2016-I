/* Name: Paul Talaga
   Date: 9/15/16
   Desc: Another way to allow the user to use yes/no.
         Uses a function to either check lots of possible inputs,
         or just check the first character of what they entered.
*/
#include <iostream>

using namespace std;

bool isYes(string input){
  bool ret = 0;
  //ret = (input == "yes" || input == "Yes" || input == "YES" || input == "1");
  ret = input[0] == 'y' || input[0] == 'Y' || '1';   // Note the ' rather than "
  return ret;
}

int main(){
  string answer = "";
  cout << "Do you want to go to class today? yes/no" << endl;
  cin >> answer;
  if( isYes(answer) ){
     cout << "you went to class" << endl;
    
  }else{
    cout << "you did not go to class" << endl;
  }
  
  return 0;
}

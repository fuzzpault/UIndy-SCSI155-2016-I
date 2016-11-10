/* Name: Paul Talaga
   Date: 9/15/16
   Desc: A method of accepting yes/no for the RPG.
*/
#include <iostream>
#include <string>

using namespace std;

bool selectNo(string input){
  return input == "no" || input == "No" || input == "NO" || input == "0";
}

int main(){
  string input = "";
  cout << "Do you want to go to class today? 0/1" << endl;
  cin >> input;
  if( selectNo(input)  ){
    cout << "That's not smart." << endl; 
  }else{
    cout << "Ok, but don't fall asleep." << endl;
  }
  
  return 0;
}

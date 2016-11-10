/* Name: Paul Talaga
   Date: 10/27/16
   Desc: Program to store and return the ID of someone using a 
         USB magnetic swipe reader (student ID card).
         Uses 2 arrays to store their card code and their name.
*/

#include <iostream>

using namespace std;

const int LENGTH = 20;

int getIndex(string c[], int length, string code){
  // Return the index in c that matches code
  // Return -1 if code can not be found!
  for(int i = 0; i < length; i++){
    if(c[i] == code){
      return i;
    }
  }
  return -1;
}

// Same functionality as getIndex above, but it 'returns' the index
// via a pass-by-reference variable ndx.
void getIndex2(string c[], int length, string code, int& ndx){
  // Return the index in c that matches code
  // Return -1 if code can not be found!
  for(int i = 0; i < length; i++){
    if(c[i] == code){
      ndx = i;
      return;
    }
  }
  ndx = -1;
  return;
}



int main(){
  string code[LENGTH];
  string names[LENGTH];
  int num_users = 0;
  
  while(1){ 
    string swipe = "";
    cout << "Please swipe your card:" << endl;
    cin >> swipe;
    //int index = getIndex(code, LENGTH, swipe);
    int index = 0;
    getIndex2(code, LENGTH, swipe, index);
    if(index == -1){
      // Not a valid (or seen) code yet
      cout << "What is your name?";
      string name;
      cin >> name;
      code[num_users] = swipe;
      names[num_users] = name;
      num_users++;
    }else{
      cout << "Hello " << names[index] << endl << endl;
    }
    
  }


}




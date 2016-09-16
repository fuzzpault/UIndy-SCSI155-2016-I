/* Name: Paul Talaga
   Date: 9/15/16
   Desc: Different for loops.
*/
#include <iostream>

using namespace std;

int main(){
  int i = 99;
  for(i = 10; i < 10; i++){
     cout << "i: " << i << endl;
  }
  
  for(int i = 0; i < 70; i++){
     cout << '-'; 
  }
  
  for(int i = 70; i >= 0; i--){
     cout << i << endl; 
  }
  
  cout << endl;
  return 0;
}

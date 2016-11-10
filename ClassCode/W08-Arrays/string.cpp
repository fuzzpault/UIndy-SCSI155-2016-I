/* Name: Paul Talaga
   Date: 10/21/16
   Desc: You can create arrays of strings too!  
         ANY type can be turned into an array.
*/
#include <iostream>

using namespace std;


int main(){
  string bob[10];  

  
  // Note that unlike an int, a string is an object and it's default value
  // will be the empty string.
  for(int i = 0; i < 10; i++){
    cout << i << ":" << bob[i] << endl;
  }
  
  return 0;
}

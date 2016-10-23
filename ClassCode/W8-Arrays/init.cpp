/* Name: Paul Talaga
   Date: 10/21/16
   Desc: Demonstration of initializing an array using the {} notation.
         You can provide initial values up to the size of the array.
         If {} doesn't mention all elements, the rest will be set to
         0.  Thus, if just {} is given, the array will be initialized
         to all 0's.
*/
#include <iostream>

using namespace std;


int main(){
  // Comment/uncomment the below lines to see the effect.
  
  int bob[5] = {};  //  Initializes all to 0
  //int bob[5] = {1,2}; // Will be [1,2,0,0,0]
  //int bob[5] = {3,4,5,6,7}; // Will be [3,4,5,6,7]

  for(int i = 0; i < 5; i++){
    cout << i << ":" << bob[i] << endl;
  }
  
  
  return 0;
}

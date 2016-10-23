/* Name: Paul Talaga
   Date: 10/21/16
   Desc: What happens when you try to create a very big array (on the stack)?
         This likely will crash because the stack is only a handful of MB.
         The stack size (limit) is OS specific.
*/
#include <iostream>

using namespace std;

long unsigned int SIZE = 1000000;

int main(){
  int bob[SIZE];  //  

  
  for(int i = 0; i < SIZE; i++){
    bob[i] = i * 2;
  }
  
  for(int i = 0; i < SIZE; i++){
    cout << i << ":" << bob[i] << endl;
  }
  
  return 0;
}

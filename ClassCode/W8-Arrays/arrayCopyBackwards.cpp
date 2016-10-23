/* Name: Paul Talaga
   Date: 10/21/16
   Desc: Demonstration of copying an array so the result is
         in reverse order.
         The ONLY way to do so is via looping through all the elements!
*/
#include <iostream>

using namespace std;

int main(){
  int a[5] = {5,6,7,8,9};
  int b[5];
  
  for(int i = 0; i < 5; i++){
    b[i] = a[4 - i]; // Note a 4, not 5, otherwise we'd access outside
                     // the array when i = 0.
  }
  
  cout << "a array: " << endl;
  for(int i = 0; i < 5; i++){
    cout << i << ": " << a[i] << endl;
  }
  
  cout << "b array: " << endl;
  for(int i = 0; i < 5; i++){
    cout << i << ": " << b[i] << endl;
  }
  
  return 0;
}

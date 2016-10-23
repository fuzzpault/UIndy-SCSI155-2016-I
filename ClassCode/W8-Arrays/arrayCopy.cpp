/* Name: Paul Talaga
   Date: 10/21/16
   Desc: Demonstration of copying an array.
         The ONLY way to do so is via looping through all the elements!
*/
#include <iostream>

using namespace std;

int main(){
  int a[5] = {5,6,7,8,9};
  int b[5];
  
  for(int i = 0; i < 5; i++){
    b[i] = a[i];
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

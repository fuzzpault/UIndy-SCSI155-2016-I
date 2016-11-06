/* Name: Paul Talaga
   Date: 11/1/16
   Desc: Demonstration of what happends when you access elements outside an
         array.  DONT DO IT!
*/
#in#include <iostream>
#include <vector>

using namespace std;

int main(){
  int array[10];
  
  for(int i = 0; i < 15; i++){
    array[i] = 89;
  }
  
  for(int i = 0; i < 15; i++){
    cout << i << " " << array[i] << endl;
  }
  
  return 0;
}

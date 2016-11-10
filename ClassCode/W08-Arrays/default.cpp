/* Name: Paul Talaga
   Date: 10/21/16
   Desc: Demonstration of what is in an array if you don't initialize it.
         For ints, we'll get garbage values.
         For objects (ex: string), the constructor will get called and thus
         will be a appropriate 'empty' value ("" for strings).
         BTW: In java everything is an object, so it behaves differently.
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
  
  int a[100];  // Change int to string to see the difference
  
  for(int i = 0; i < 100; i++){
    cout << i << ": " << a[i] << endl;
  }
  
  return 0;
}

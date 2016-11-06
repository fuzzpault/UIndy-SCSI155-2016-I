/* Name: Paul Talaga
   Date: 11/3/16
   Desc: Demo of using a vector.  push_back can be used to add elements onto
         the end of the vector(array).  Since it is an object, it knows its size!
*/
#include <iostream>
#include <vector>

using namespace std;

int main(){
  //int array[10];
  vector<int> a;
  a.push_back(5);
  a.push_back(50);
  
  for(int i = 0; i < a.size(); i++){
    cout << i << ": " << a[i] << endl;
  }
  
  a.push_back(10);
  cout << endl;
  
  for(int i = 0; i < a.size(); i++){
    cout << i << ": " << a[i] << endl;
  }
  
  // Just like an array, we can try to look at elements outside of the 
  // vector/array, so this will be a garbage value.
  cout << a[3] << endl;
  
  return 0;
}

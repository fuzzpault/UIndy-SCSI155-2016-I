/* Name: Paul Talaga
   Date: 10/21/16
   Desc: Arrays have NO bounds checking!  You must be careful never to 
         go outside the array bounds or a segmentation fault may occur.
         Sometimes it will, sometimes it won't, which is not a very
         reliable program!
*/
#include <iostream>

using namespace std;

int main(){
  
  int a[10]; // Valid indexes: 0,1,2,3,4,5,6,7,8,9
  
  a[0] = 5;  // Works!
  a[7] = 67; // Works!
  cout << "a[110] = " << a[110] << endl; // May work.
  for(int i = 0; i < 10; i++){
    cout << i << ": " << a[i] << endl;
  }
  
}

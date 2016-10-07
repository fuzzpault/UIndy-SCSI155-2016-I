/* Name: Paul Talaga
   Date: 10/4/16
   Desc:Example of a function prototype.  Comment out like 10 and notice the error
        message you get.
*/
#include <iostream>

using namespace std;

int favoriteNumber(int x);

int main(){
  int a = 5;
  cout << favoriteNumber(a) << endl;
  cout << "a: " << a << endl;
  
  return 0;
}

int favoriteNumber(int x){
  cout << x << endl;
  x++;
  return x;
}

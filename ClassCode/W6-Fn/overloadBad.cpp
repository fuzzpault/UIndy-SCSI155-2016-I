/* Name: Paul Talaga
   Date: 10/4/16
   Desc: This will not compile because the 2 cat functions take numbers and C++ 
         can convert between the two.
*/
#include <iostream>

using namespace std;

void cat(int n){
  cout << "I have " << n << " cats" << endl;
}

void cat(float n){
  cout << "I have " << n << "fractional cats" << endl;
}

int main(){
  cat(67);
  cat(68.1);
  return 0;
}

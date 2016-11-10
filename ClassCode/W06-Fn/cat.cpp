/* Name: Paul Talaga
   Date: 10/4/16
   Desc:Example of function calling.  Functions can call other functions inside of
        themselves (and can even call themselves!).
*/
#include <iostream>

using namespace std;

void cat(int n){
  cout << "I have " << n << " cats" << endl;
}

void cat(){
  cout << "in here" << endl;
  cat(1);
  cout << "over here" << endl;
}

int main(){
  cat(67);
  cat(68);
  cat();
  return 0;
}

/* Name: Paul Talaga
   Date: 10/6/16
   Desc: Three different ways of returning a boolean.  The last (theSame3) is the simplest, though
         the others work fine.
*/
#include <iostream>
#include <string>

using namespace std;

bool theSame(int a, int b){
  if(a == b){
    return true;
  }else{
    return false;
  }
  
}

bool theSame2(int a, int b){
  if(a == b){
    return true;
  }
  return false;
}

bool theSame3(int a, int b){
  return a == b;
}

int main(){
  int x = 0;
  while( ! theSame3(x, 10) ){
    cout << x << endl;
    x++;
  }
  
  return 0;
}

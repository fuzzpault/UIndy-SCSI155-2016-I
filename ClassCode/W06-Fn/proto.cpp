/* Name: Paul Talaga
   Date: 10/4/16
   Desc: The two cat functions are prototyped before they are used, and then 
         implemented afterward.  This is fine to do!
*/
#include <iostream>

using namespace std;

void cat(int n);
void cat();

int main(){
  cat(67);
  cat(68);
  cat();
  return 0;
}

void cat(int n){
  cout << "I have " << n << " cats" << endl;
}

void cat(){
  cout << "in here" << endl;
  cat(1);
  cout << "over here" << endl;
}

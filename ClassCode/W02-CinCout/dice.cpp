/* Name: Paul Talaga
   Date: 9/9/16
   Desc: A dice using rand.  Run this and see the numbers, then uncomment the srand
         and do the same.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  //srand(time(0));
  cout << rand() % 6 + 1<< endl;
  cout << rand() % 6 + 1<< endl;
  cout << rand() % 6 + 1<< endl;
  cout << rand() % 6 + 1<< endl;
  cout << rand() % 6 + 1<< endl;
  cout << rand() % 6 + 1<< endl;

  return 0;
}

/* Name: Paul Talaga
   Date: 9/9/16
   Desc: Demo of rand, time, and srand.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  cout << "time: " << time(0) << endl;
  srand(time(0));
  cout << rand() << endl;
  cout << rand() << endl;
  
  cout << rand() << endl;
  cout << rand() << endl;
}

/* Name: Paul Talaga
   Date: 9/9/16
   Desc: Demo of rand, time, and srand.
*/

#include <iostream>

using namespace std;

int main(){
  // These 2 are equivalent acording to demorgan's laws.
  // https://en.wikipedia.org/wiki/De_Morgan%27s_laws
  cout << (!(5 == 7)) << endl; 
  cout << (5 != 7) << endl; 
  
  // These 2 are also equivalent    
  cout << (!(5 <= 7)) << endl; 
  cout << (5 > 7) << endl;     // Note the loss of =
   
   bool a = true;
   bool b = false;
   cout << a && b << endl;     // and
   cout << a || b << endl;     // or
   
   return 0;
}

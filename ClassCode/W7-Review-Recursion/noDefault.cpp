/* Name: Paul Talaga
   Date: 10/1/16
   Desc: What values do parameters have if you don't assign them?
         Who knows!  So to be safe ALWAYS assign variables when you declare them.
*/
#include <iostream>

using namespace std;

int main(){
  int a,b,c,d,e;
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;
  cout << e << endl;
  {
  int a = 9;
  
  };
}

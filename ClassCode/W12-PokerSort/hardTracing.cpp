/* Name: Paul Talaga
   Date: 11/15/16
   Desc: Extra hand-tracing code.
*/
#include <iostream>
using namespace std;

int function1(int a, int& b, int c){
  a = a + 5;
  b = a - 1 + c;
  c = a + b;
  return a + c + 1;
}

int main(){
  int a = 5;
  int b = 10;
  int c = 66;
  int d[] = {8,5,7};
  
  b = function1(c,a, d[0]);
  d[1] = function1(a,b,c);
  
  cout << a << endl << b << endl << c << endl << d[0] << endl << d[1] << endl;
  // 78  148   66   8  315
}

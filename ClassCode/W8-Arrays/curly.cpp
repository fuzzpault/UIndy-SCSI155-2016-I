/* Name: Paul Talaga
   Date: 10/20/16
   Desc: Demonstration of why curly braces are needed {}.
         This looks like all the cout statements are in the loop,
         but really only line 14 is.  INDENTATION DOES NOT MATTER to
         the compiler.  Be sure to ALWAYS use {} so you don't mess up!
*/
#include <iostream>

using namespace std;

int main(){
  int i = 0;
  for(i = 0; i < 10; i++)
    cout << i;
    cout << " ";
    cout << i * 2;
    cout << endl;
    
  return 0;
}

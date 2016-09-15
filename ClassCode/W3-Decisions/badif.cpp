/* Name: Paul Talaga
   Date: 9/13/16
   Desc: A common error using if statements. The 'true' will always
         be printed because the ; ends the statement the if influences.
*/
#include <iostream>

using namespace std;

int main(){
 if( 0 && 1)cout << "true\n"; cout << "more";
     cout << "more here\n";

    
 return 0; 
}

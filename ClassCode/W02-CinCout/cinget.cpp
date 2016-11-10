/* Name: Paul Talaga
   Date: 9/9/16
   Desc: Demo of how cin really uses a buffer.  
         At the first prompt, enter a full word and notice the output.
*/
#include <iostream>

using namespace std;

int main(){
    char a;
    cin.get(a);
    cout << a << " then ";
    cin.get(a);
    cout << a;
    
    return 0; 
}

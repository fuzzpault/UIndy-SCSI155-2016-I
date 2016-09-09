/* Name: Paul Talaga
   Date: 9/9/16
   Desc: Demo of how strings are objects, which have member functions.
         Note the a.size() call on line 18/19.  It tells us the size of
         the string.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string a = "";
    string b = "";
    cin >> a;
    cin >> b;
    cout << a << " - " << b << endl;
    
    cout << "a length: " << a.size() << endl;
    cout << "b length: " << b.size() << endl;
    cout << a + b << endl; // Adding strings concatenates them.
              // But doesn't change a or b.
    
    return 0; 
}

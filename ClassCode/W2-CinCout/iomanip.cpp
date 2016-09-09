/* Name: Paul Talaga
   Date: 9/9/16
   Desc: Use of iomanip, setprecision, setw, and fixed for formatting output to cout.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float pi = 3.14159;
    float pi2 = 3.14159;
    cout << "pi is: " << setprecision(4) << setw(40) << fixed << pi << endl;
    
    return 0; 
}

/* Name: Paul Talaga
   Date: 9/9/16
   Desc: Does getline work with numbers(integers or floats?)
*/
#include <iostream>

using namespace std;

int main(){
    float amt = 0.0;
    cout << "How many fries did you have for lunch?" << endl;
    getline(cin, amt);
    cout << "Nice, I like " << amt << endl;
    
    return 0; 
}

/* Name: Paul Talaga
   Date: 9/9/16
   Desc: Tells you if a number is even or not.
*/
#include <iostream>

using namespace std;

int main(){
    int number = 0;
    cout << "Enter a number: " << endl;
    cin >> number;
    if(! (number%2)){
         cout << "That is even!\n"; 
    }else{
          cout << "Not even!\n"; 
    }
    
    return 0; 
}

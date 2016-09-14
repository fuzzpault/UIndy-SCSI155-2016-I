/* Name: Paul Talaga
   Date: 9/13/16
   Desc: Comparing strings.
         Try entring in 2 multi-digit numbers!
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
  cout << "Enter two words:\n";
  string a; 
  string b;
  cin >> a;
  cin >> b;
  if(a < b){
    cout << a << " is less than " << b << endl;
  }else if(a == b){
    cout << a << " is equal to " << b << endl;
  }else{
    cout << b << " is less than " << a << endl;
  }
}

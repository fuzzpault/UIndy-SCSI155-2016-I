#include <iostream>

using namespace std;

int main(){
 cout << "Enter 2 integers less than 100:" << endl;
 int a = 0; 
 int b = 0;
 cin >> a;
 cin >> b;
 while(a >= 100 || b >= 100){
  cout << "Those were not valid, try again..." << endl;
  cin >> a;
  cin >> b; 
 }
 cout << "Their sum is " << a + b << endl;
 
 
 return 0; 
}

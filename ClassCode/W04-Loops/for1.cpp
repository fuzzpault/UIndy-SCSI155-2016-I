#include <iostream>
#include <iomanip>

using namespace std;

int main(){
 int count;
 cout << "enter a width: " << endl;
 cin >> count;
 
 /*for(int i = 0; i < count; i++){
  //cout << "i: " << i << endl; 
  //cout << "*";
  cout << "...---... ";
 } */
 
 for(int y = 1; y <= count; y++ ){
   for(int x =1; x <= count; x++ ){
     cout << setw(4) <<  x * y;
   }
   cout << endl;
 }
 
 //cout << i << endl;
 return 0; 
}

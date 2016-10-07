/* Name: Paul Talaga
   Date: 10/4/16
   Desc:Example of default parameters.
*/
#include <iostream>

using namespace std;


void favoriteNumber(int x = 9, int y = 10){
  cout << "x: " << x << endl;
  cout << "y: " << y << endl;
}

int main(){
  int a = 5;
  favoriteNumber();
  favoriteNumber(55);
  favoriteNumber(1,2);
  
  return 0;
}

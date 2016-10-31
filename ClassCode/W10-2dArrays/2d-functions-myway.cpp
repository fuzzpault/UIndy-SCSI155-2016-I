/* Name: Paul Talaga
   Date: 10/31/16
   Desc: Emulating a 2d array using a 1d array and a conversion function.
         This gets around the issue of specifying the column width in the
         function declaration.
*/
#include <iostream>
#include <iomanip>

using namespace std;

const int WIDTH = 10;
const int HEIGHT = 10;

int getLocation(int x, int y){
  return y * WIDTH + x;
}

void print(int array[]){
  for(int row = 0; row < 10; row++){
      cout << row << ": ";
      for(int col = 0; col < 10; col++){
        cout << setw(3) <<  array[ getLocation(col,row) ] << ' ';
      }
      cout << endl;
    }
}

int main(){
  int a[WIDTH * HEIGHT] = {};
  
  for(int row = 0; row < 10; row++){
    for(int col = 0; col < 10; col++){
      a[ getLocation(col,row) ] = (row + 1) * (col + 1);
    }
  }
  
  print(a);
    
  
  
}

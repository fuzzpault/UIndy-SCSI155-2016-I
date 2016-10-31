/* Name: Paul Talaga
   Date: 10/31/16
   Desc: Demonstration of passing a 2d array to a function. All dimensions,
         EXCEPT the first need to be specified in the function declaration.
*/
#include <iostream>
#include <iomanip>

using namespace std;


void print(int array[][10]){
  for(int row = 0; row < 10; row++){
      cout << row << ": ";
      for(int col = 0; col < 10; col++){
        cout << setw(3) <<  array[row][col] << ' ';
      }
      cout << endl;
    }
}

int main(){
  int a[10][10] = {{1,2,3,4,5,6,7,8,9,10}, {1,2,3}};
  // The next statement would 'fall' onto the next row.
  //int a[10][10] = {1,2,3,4,5,6,7,8,9,10,16};
  
  // Fill the array
  for(int row = 0; row < 10; row++){
    for(int col = 0; col < 10; col++){
      a[row][col] = (row + 1) * (col + 1);
    }
  }
  
  print(a);
    
  
  
}

/* Name: Paul Talaga
   Date: 10/31/16
   Desc: Demonstration declaring, filling, and printing a 2d array.
         Going to higher dimensions is possible by adding more [..]
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  // Just like a single dimension array, this will initialize the first 2
  // elements, with all the rest to 0.
  int a[10][10] = {1,2};
  
  // Fill the array
  for(int row = 0; row < 10; row++){
    for(int col = 0; col < 10; col++){
      a[row][col] = (row + 1) * (col + 1);
    }
  }
  
  // Print the array.
  for(int row = 0; row < 10; row++){
    cout << row << ": ";
    for(int col = 0; col < 10; col++){
      cout << setw(3) <<  a[row][col] << ' ';
    }
    cout << endl;
  }
    
    // What will this print?
    // Since a 2d array is really just a 1d array with rows adjacent, we can 
    // access the [9][9] element this way.  You shouldn't do this, but it shows
    // how arrays are really stored!
    cout << "a[0][99] = " << a[0][99] << endl;
    
  
  
}

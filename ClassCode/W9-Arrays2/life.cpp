/* Name: Paul Talaga
   Date: 10/27/16
   Desc: 1D Conway's Game of Life.
   It's a cool demonstration of a use of arrays.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;
const int WIDTH = 80;

int next0(int l, int c, int r){
  if(l == 1 && c == 0 & c == 0) return 1;
  if(l == 0 && c == 1 & c == 1) return 1;
  if(l == 0 && c == 1 & c == 0) return 1;
  if(l == 0 && c == 0 & c == 1) return 1;
  return 0;
}

int next(int l, int c, int r){
  if(l == 0 && c == 0 & c == 0) return 1;
  if(l == 0 && c == 0 & c == 1) return 1;
  //if(l == 0 && c == 1 & c == 0) return 1;
  //if(l == 0 && c == 1 & c == 1) return 1;
  //if(l == 1 && c == 0 & c == 0) return 1;
  //if(l == 1 && c == 0 & c == 1) return 1;
  if(l == 1 && c == 1 & c == 0) return 1;
  if(l == 1 && c == 1 & c == 1) return 1;
  return 0;
}

void nextGeneration(int array[], int length){
  int temp[WIDTH] = {};
  for(int i = 0; i < length -2; i++){
    temp[i+1] = next(array[i], array[i+1], array[i+2]);
  }
  // copy temp back to array
  for(int i = 0; i < length; i++){
    array[i] = temp[i];
  }

}


void printGeneration(int array[], int length){
 // Print a line of _ and X
 for(int i = 0; i < length; i++){
   if(array[i] == 1){
     cout << "X";
   }else{
     cout << " ";
   }
 }
 cout << endl;
}

int main(){
  int array[WIDTH] = {}; // full of 1 or 0
  
  array[WIDTH / 2] = 1;
  for(int i = 0; i < WIDTH/2; i++){
    array[i] = rand() %2;
  }
  
  int limit = 100;
  while(limit > 0){
    printGeneration(array, WIDTH);
    nextGeneration(array, WIDTH);
      
    limit--;
  }
}

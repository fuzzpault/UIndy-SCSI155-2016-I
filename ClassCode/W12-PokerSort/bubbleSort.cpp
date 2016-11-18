/* Name: Paul Talaga
   Date: 11/18/16
   Desc: Bubble sort implementation.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void print(int a[], int length){
  cout << '[';
  for(int i = 0; i < length; i++){
    cout << a[i] << ',';
  }
  cout << ']' << endl;
}

// Bubble Sort the array.  
// 2 optimizations: 
//  1. exit early if the list is already sorted.
//  2. Don't bubble all the way up since the let elements
//     are in their correct spots and need to be checked.
void bubble(int a[], int length){
  int count = 0;
  for(int j = 0; j < length; j++){  // Do n bubbles
    bool didFlip = false;
    for(int i = 0; i < length-1-j; i++){
      count++;
      if(a[i] > a[i+1]){ // Out of order, so flip!
        int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
        didFlip = true;
      }
    }
    if(didFlip == false){
      // Print out the number of comparisons done to see speed optimization.
      cout << "count: " << count << endl;
      return;
    }
  }
  cout << "count: " << count << endl;
}

bool isSorted(int a[], int length){
  for(int i = 0; i < length-1; i++){
    if(a[i] > a[i+1]){
      return false;
    }
  }
  return true;
}

int main(){
  srand(time(0));
  int a[100];
  for(int i = 0; i < 100; i++){
    a[i] = rand() % 100;
  }
  print(a,100);
  cout << "Sorted? " << isSorted(a, 100);
  bubble(a,100);
  print(a,100);
  cout << "Sorted? " << isSorted(a, 100);


}

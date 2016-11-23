/* Name: Paul Talaga
   Date: 11/18/16
   Desc: Selection sort implementation.
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


// No oportunity to exit early.
void selection(int a[], int length){
  for(int start = 0; start < length-1; start++){
    // Looking at start to end, find the min between them and flip with start
    int min_value = a[start];
    int min_loc = start;
    for(int i = start; i < length; i++){
      if(min_value > a[i]){
        min_value = a[i];
        min_loc = i;
      }
    }
    // Now I have the minimum value and location from start to end
    //cout << "min: " << min_value << " loc: " << min_loc << endl;
    // Flip with the minimum element
    int temp = a[start];
    a[start] = a[min_loc];
    a[min_loc] = temp;
  }
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
  const int SIZE = 50;
  srand(time(0));
  int a[SIZE];
  for(int i = 0; i < SIZE; i++){
    a[i] = rand() % 100;
  }
  
  // Print out the unsorted list
  print(a,SIZE);
  cout << "Sorted? " << isSorted(a, SIZE);
  
  // Sort it!
  selection(a,SIZE);
  print(a,SIZE);
  cout << "Sorted? " << isSorted(a, SIZE);


}

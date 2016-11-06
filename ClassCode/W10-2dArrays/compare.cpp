/* Name: Paul Talaga
   Date: 11/4/16
   Desc: Help with how to reverse and shuffle an array: use a swap function!
         Also demonstrates you CAN NOT compare two arrays directly, you MUST
         use a for loop and compare every element.
*/
#include <iostream>
#include <ctime>
#include <vector>
#include <cstdlib>

using namespace std;

void swap(int v[], int length, int a, int b){
  // Swaps the values in locations a and b
  // TODO: check a and b for validity
  int temp = v[a];
  v[a] = v[b];
  v[b] = temp;
}

void shuffle(int v[], int length){
  // This won't work right, otherwise you'd have the answer to the HW!
  for(int i = 0; i < length; i++){
    int a = i;
    int b = length - 1 -i;
    swap(v, length, a, b);
  }

}

void print(int v[], int length){
  cout << '[';
  for(int i = 0; i < length; i++){
    cout <<  v[i] << ", "; 
  }
  cout << "]\n\n";
}

int main(){
  int array[10] = {};
  srand(time(0));
  
  for(int i = 0; i < 10; i++){
    array[i] = rand() % 35;
  }
  
  int array2[10] = {};
  
  // This compiles, but doesn't work correctly as it checks the address
  // of the first element of the array rather than checking each element.
  if( array == array2){
    cout << "They match!" << endl;
  }
  // The ONLY way to check 2 arrays is to use a for loop and check each element.
  
  print(array, 10);
  print(array2, 10);
  
  
  return 0;
}

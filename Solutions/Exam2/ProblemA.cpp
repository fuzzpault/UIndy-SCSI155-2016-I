/* Name: Paul Talaga
   Date: 11/20/16
   Desc: Exam 2 - Problem A

Implement the following 3 functions given these function prototypes:


int minValue(int arr[], int length);
int maxValue(int arr[], int length);
bool contains(int arr[], int length, int value);


Where: 
          arr is an integer array of sorted integers.
          length is the number of elements in arr.
          value is an integer to search for.
	           
minValue and maxValue should return the min and max values in the arrays accordingly, as fast as possible.  -5 each for a slow solution
contains should return true if value is in the array, or false if it is not, as fast as possible.  -5 for a slow solution.
*/

#include <iostream>
#include <vector>
using namespace std;

// Since the array is sorted, the minimum value is the first element.
int minValue(int arr[], int length){
  if(length <= 0)return 0; // This wasn't required in your solution.
  return arr[0];
}

// Since the array is sorted, the maximum value is the last element.
int maxValue(int arr[], int length){
  if(length <= 0)return 0; // This wasn't required in your solution.
  return arr[length - 1];
}

// The slow method, loop through the array.
bool containsSlow(int arr[], int length, int value){
  for(int i = 0; i < length; i++){
    if(arr[i] == value)return true;
  }
  // If the code got here then it must not have been in the array, return false.
  return false;
}

// The fast method, when the array is sorted, do binary search.
// Credit was given if you had anything similar to the code below.
// Splitting in half is important!  It is O(log_n)
bool contains(int arr[], int length, int value){
  int start = 0;
  int end = length - 1;
  while(end >= start){
    int middle = start + (end - start) / 2;
    if( arr[middle] == value){ // Found it!
      return true;
    }
    if(arr[middle] > value){
      end = middle - 1;
    }else{
      start = middle + 1;
    }
  }
  return false;
}


int main(){
     int array[10] = {1,3,4,7,9,11,13,15,17,19};
     cout << "Min is: " << minValue(array,10) << endl;
     cout << "Max is: " << maxValue(array,10) << endl;
     cout << "Contains  2? " << contains(array,10,2) << endl;
     cout << "Contains 17? " << contains(array,10,17) << endl;
     
     return 0;
}

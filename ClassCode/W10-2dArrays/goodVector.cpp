/* Name: Paul Talaga
   Date: 11/3/16
   Desc: Demo of using a vector and an equivalent array notation.
*/
#include <iostream>
#include <vector>

using namespace std;

int main(){
  //int array[10];  // This creates an array of 10 elements
  vector<int> array;// This creates an empty vector
  
  // For an array, we can change the elements already there, but not add more.
  // For a vector, we can add elements on the end.
  for(int i = 0; i < 15; i++){
    //array[i] = 89;
    array.push_back(89);
  }
  
  // Once the vector has data in it, we can access elements just like an array.
  for(int i = 0; i < 15; i++){
    cout << i << " " << array[i] << endl;
  }
  
  return 0;
}

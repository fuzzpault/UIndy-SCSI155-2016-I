/* Name: Paul Talaga
   Date: 11/29/16
   Desc: Pointer and array modification class example.
         Write on a piece of paper what memory looks like,
         as well as what is printed to the screen.
*/
#include <iostream>

using namespace std;

void print(int array[], int length){
  cout << '[';
  for(int i = 0; i < length; i++){
    cout << array[i] << ',';
  }
  cout << "]\n";
}

int main(){

  int array[10] = {};
  int* a = array+2;
  int* b = array+3;
  
  *a = 5;
  *b = 6;
  b = a+3;
  *b = 10;
  array[0] = 3;
  
  print(array,10);

  return 0;
}







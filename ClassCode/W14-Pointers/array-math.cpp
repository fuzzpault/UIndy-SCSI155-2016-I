/* Name: Paul Talaga
   Date: 11/29/16
   Desc: Pointer and array modification class example.
         You can add arbitrary values to a pointer (memory address)
         to access another memory location.
         Since arrays are contiguous in memory, you can read an array
         using pointer arithmetic!
*/
#include <iostream>

using namespace std;

void print(int a[], int length){
  cout << '[';
  for(int i = 0; i < length; i++){
    cout << a[i] << ',';
  }
  cout << "]\n";
}

int main(){
  int a[10] = {};
  for(int i = 0; i < 10; i++){
    a[i] = i;
  }
  int* b = a;
  int* c = a + 1;
  
  cout << "*b: " << *b << " b: " << b << endl;
  cout << "*c: " << *c << " c: " << c << endl;
  
  print(a,10);
  
  return 0;
}

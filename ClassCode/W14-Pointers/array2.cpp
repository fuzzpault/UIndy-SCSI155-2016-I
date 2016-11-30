/* Name: Paul Talaga
   Date: 11/29/16
   Desc: Pointer and array modification class example.
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
  a[1] = 10;
  int* b = a;
  
  cout << "*b: " << *b << endl;
  cout << "*(b+1): " << *(b+100) << endl;
  
  cout << "b: " << b[1] << endl;
  a[2] = 99;
  cout << "b: " << b[2] << endl;
  print(a,10);
  
  return 0;
}

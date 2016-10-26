/* Name: Paul Talaga
   Date: 10/24/16
   Desc: Preliminary pointer demo using arrays.
         Understanding of this is not neccessary until Nov/Dec.
*/
#include <iostream>

using namespace std;

void changeMe(int array[]){
  cout << "change me array: " << array << endl;
  //array[0] = 67;
  *(array + 0) = 68;
}

int main(){
  int cory = 68;
  int a[5] = {1,2,3,4,5};
  int chad = 62;
  int* b = a;
  cout << a[0] << endl;
  changeMe(a);
  
  cout << "main: " << a << endl;
  /*cout << a[0] << endl;
  cout << "b: " << b << endl;
  cout << "b[3] = " << b[3] << endl;
  b[1] =  156; */
  cout << a[0] << endl;
  //cout << a << endl;
}

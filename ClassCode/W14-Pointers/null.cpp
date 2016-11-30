/* Name: Paul Talaga
   Date: 11/29/16
   Desc: Just like normal variables contain garbage values if they aren't
         initialized, a pointer variable will have a garbage variable as 
         well.  If that pointer is dereferenced (either setting or getting)
         it will likely be outside your allowed memory region and segfault, 
         but it may not.
         As a safety measure, initialize all pointer variables to NULL or set 
         them, so it will ALWAYS segfault, allowing you to fix the issue.
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
  int a = 10;
  int b = 15;
  
  int* p = NULL;
  
  cout << a << " is at " << &a << endl;
  cout << b << " is at " << &b << endl;
  cout << p << " is at " << &p << endl;
  
  //cout << *p << endl;
  
  
  return 0;
}

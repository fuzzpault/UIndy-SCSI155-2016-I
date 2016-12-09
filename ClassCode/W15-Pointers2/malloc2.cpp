#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  int* array = (int*)malloc(1);
  
  array[0] = 10;
  cout << array[0] << endl;
  
  free(array);
  
  void* a = NULL;
  void* b = NULL;
  
  a = &b;
  b = &a;
  
}




#include <iostream>

using namespace std;

int main(){

  int a = 5;
  int* ap = &a; 
  int* b = NULL;
  
  cout << a << " is at " << &a << endl;
  cout << ap << " is at " << &ap << " and points to " << *ap << endl;
  cout << b << " points to a " << *b << endl;
  

  return 0;
}

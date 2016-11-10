#include <iostream>

using namespace std;

// Sum takes an integer and returns the sum of numbers less than it > 0
int sum(int a){
  int sum = 0;
  for(int i = 0; i <= a; i++){
    sum = sum + i;
  }
  return sum;
}

// Recursive fn needs 2 things:  BASE CASE, and recursive call
int sum2(int a){
  // Base case
  if( a == 0){
    return 0;
  }
  // recursive call
  return a + sum2(a-1);
}

int pow(int base, int exponent){
  cout << "Base: " << base << " Exponent: " << exponent << " base: " << &base << endl;
  // Base case
  if(exponent == 0){
    return 1;
  }
  // Recursive call
  return base * pow(base, exponent - 1);
}

int fib(int ndx){
  //cout << "fib " << ndx << endl;
  if(ndx == 0){
    return 0;
  }
  if(ndx == 1){
    return 1;
  }

  return fib(ndx - 1) + fib(ndx - 2);
}

int main(){
  cout << fib(25) << endl;
  //cout << fib(5) << endl;
}

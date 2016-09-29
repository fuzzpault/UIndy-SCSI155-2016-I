#include <iostream>

using namespace std;

int main(){
  // f(x) = x^2 + 1
  // f'(x) = x^3/3 + x      = 121.33333333
  // From 0 to 7
  int samples = 100000;
  float step_size = (7.0 - 0.0) / (samples - 1); 
  
  float x = 0;
  float last_fx = x * x + 1;
  float sum = 0.0;
  
  for(x = 0 + step_size; x <= 7; x = x + step_size){
    // Find trapezoid area and add to sum
    float fx = x * x + 1;
    sum = sum + (fx + last_fx)/2 * step_size;
    last_fx = fx;
  }
  cout << "sum: " << sum << endl;
}

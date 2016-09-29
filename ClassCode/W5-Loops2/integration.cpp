/*

*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
  // Initialize data variables
  double c0 = 0.0;
  double c1 = 0.0;
  double c2 = 0.0;
  double c3 = 0.0;
  double e = 0.0;
  double r_min = 0.0;
  double r_max = 0.0;
  int samples = 0;

  cout << "Welcome To Your Personal Integrator!\n";
  cout << "Enter 5 values to fill in the equation:\n";
  cout << "C0 + C1 * X + C2 * X^2 + C3 * X^(E)\n";
  cout << "C0: ";
  cin >> c0;
  cout << "C1: ";
  cin >> c1;
  cout << "C2: ";
  cin >> c2;
  cout << "C3: ";
  cin >> c3;
  cout << "E: ";
  cin >> e;
  
  cout << "Now enter range min and max: ";
  cin >> r_min;
  cin >> r_max;
  while(r_min > r_max){
    cout << "Enter min and max values where min is less than max: ";
    cin >> r_min;
    cin >> r_max;
  }
  cout << "Now enter the number of samples to use (>=2): ";
  cin >> samples;
  while(samples < 2 && samples != -1){
    cout << "Enter number samples (>=2): ";
    cin >> samples;
  }
  
  // Set up sampling variables
  bool auto_samping = false;
  double step_size = (r_max - r_min) / (samples -1);      // -1 is because we want in-between

  
  double x = r_min;
  double last = c0 + c1 * x + c2 * x * x + c3 * pow(x, e);
  
  // Set up stat variables
  double maximum_f = last;
  double minimum_f = last;
  int crossings = 0;
  double area = 0;
  
  int count = 1;
  // Now loop!
  for(int i = 0; i < samples -1; i++){
    x = x + step_size;
    double current = c0 + c1 * x + c2 * x * x + c3 * pow(x, e);
    if(maximum_f < current){ // New max
      maximum_f = current;
    }
    if(minimum_f > current){ // New min
      minimum_f = current;
    }
    if((last < 0 && current > 0) ||
       (last > 0 && current < 0)){
      crossings++;   
    }
    area += (current + last) * step_size / 2;
    last = current;
    count++;
  }
  
  cout << "\nUsing " << samples << " samples." << endl;
  cout << "  Maximum f(x): " << maximum_f << endl;
  cout << "  Minimum f(x): " << minimum_f << endl;
  cout << "f(x) = 0 count: " << crossings << endl;
  cout << "  Area of f(x): " << area << endl;
  
  return 0;
}

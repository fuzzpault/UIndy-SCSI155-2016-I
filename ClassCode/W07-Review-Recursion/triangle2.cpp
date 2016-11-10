#include <iostream>
#include <cmath>

using namespace std;

bool arbitraryTriangleArea(float a, float b, float c, float& area, float& perimeter){
  if(a <= 0 || b <= 0 || c <= 0){
    area = -1;
    perimeter = -1;
    return false;
  }
  if(c > a + b || b > a + c || a > b + c){
    area = -1;
    perimeter = -1;
    return false;
  }
  // It's a triangle!
  perimeter = a + b + c;
  float s = perimeter / 2;
  area = sqrt(s * (s-a) * (s-b) * (s-c));
  return true;
}


int main(){
  float a = 0;
  float p = 0;
  cout << arbitraryTriangleArea(-3,-4,-5, a, p) << endl;
  cout << "area: " << a << endl;
  cout << "perimeter: " << p << endl;
  
}

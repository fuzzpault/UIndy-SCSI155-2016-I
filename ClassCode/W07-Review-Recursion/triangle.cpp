/* Name: Paul Talaga
   Date: 10/1/16
   Desc: Solution to Exam 1 Practice coding problem.
*/
#include <iostream>
#include <cmath>

using namespace std;

bool arbitraryTriangleArea(float a, float b, float c, float& t_area, float& t_perimeter){
  // Check if invalid
  if((a+b  < c) || (a+c < b) || (b+c < a)){
    t_area = -1;
    t_perimeter = -1;
    return false;
  }
  // Valid triangle.
  t_perimeter = a + b + c;
  float s = t_perimeter / 2;
  t_area = sqrt(s * (s - a) * (s - b) * (s - c));
  return true;
}

int main(){
  float area = 0;
  float perimeter = 0;
  
  cout << arbitraryTriangleArea(3,4,5, area, perimeter) << endl;
  
  cout << "Area: " << area << endl;
  cout << "Perimeter: " << perimeter << endl;

}

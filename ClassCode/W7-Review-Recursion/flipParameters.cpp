/* Name: Paul Talaga
   Date: 10/10/16
   Desc: Solution to Exam 1 Practice coding problem.
*/
#include <iostream>

using namespace std;

int sum_from_to(int low, int high){
  if(low > high){
    // flip high and low
    int temp = low;
    low = high;
    high = temp;
  }
  // Low must be <= high
  int sum = 0;
  for(int i = low; i <= high; i++){
    sum  = sum + i;
    //sum += i;   // Or this
  }
  return sum;
}

int main(){
  cout << sum_from_to(-5,0) << endl;
  cout << sum_from_to(0,-5) << endl;
  
}

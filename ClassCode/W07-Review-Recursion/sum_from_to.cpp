#include <iostream>
#include <cmath>

using namespace std;

int sum_from_to(int low, int high){
  if(low > high){
    int temp = low;
    low = high;
    high = temp;
  }
  int sum = 0;
  for(int i = low; i <= high; i++){
    //sum += i;
    sum = sum + i;
  }
  return sum;
}

int main(){
  cout << sum_from_to(5, 0) << endl;
}

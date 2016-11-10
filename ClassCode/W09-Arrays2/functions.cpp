/* Name: Paul Talaga
   Date: 10/25/16
   Desc: Demonstration of common array operations.
*/
#include <iostream>

using namespace std;

int sum(int cory[], int length){
  int s = 0; 
  for(int i = 0; i < length; i++){
    s = s + cory[i];
  }
  return s;
}


float average(int bob[], int length){
  return sum(bob, length) / (float)length;
}

int max(int b[], int length){
  if(length <= 0)return 0;
  // If you don't check the length first, the next line may segfault
  int cur_max = b[0];
  for(int i = 1; i < length; i++){
    if( b[i] > cur_max){
      cur_max = b[i];
      cout << "Found new max: " << b[i] << endl;
    }
  }
  return cur_max;
}

int main(){
  int a[10] = {4,5,6,7,8,9,0,1,2,99};
  int b[3] = {-10, -5, -3};
  int c[0];
  
  
  cout << "sum: " << sum(a, 10) << endl;
  cout << "average: " << average(a, 10) << endl;
  cout << "max: " << max(c, 0) << endl;
  
  return 0;
}

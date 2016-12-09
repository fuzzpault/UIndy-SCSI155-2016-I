/* Name: Paul Talaga
   Date: 12/9/16
   Desc: Examples for 2 recursive functions to find the sum and maximum
         element in an array.
*/
#include <iostream>

using namespace std;

int sum(int array[], int length){
  if(length == 1){
    cout << "1 length" << endl;
    return array[0];
  }else{
    cout << "length: " << length << endl;
    return sum(array, length -1) + array[length-1];
  }
}

int max(int array[], int length){
  if(length == 1){
    return array[0];
  }else{
    int rest_max = max(array, length -1);
    if(rest_max < array[length-1]){
      return array[length-1];
    }else{
      return rest_max;
    }
  }
}

int main(){
  int bob[10] = {1,2,3,4,5,60,7,8,9,10};
  
  cout << sum(bob, 10) << endl;
  cout << max(bob, 10) << endl;
}

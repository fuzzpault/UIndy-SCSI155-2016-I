#include <iostream>
#include <vector>

using namespace std;

int main(){
  //int array[10];
  vector<int> array;
  
  for(int i = 0; i < 15; i++){
    //array[i] = 89;
    array.push_back(89);
  }
  
  for(int i = 0; i < 15; i++){
    cout << i << " " << array[i] << endl;
  }
  
  return 0;
}

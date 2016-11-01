#include <iostream>
#include <vector>

using namespace std;

int main(){
  //int array[10];
  vector<int> a;
  a.push_back(5);
  a.push_back(50);
  
  for(int i = 0; i < a.size(); i++){
    cout << i << ": " << a[i] << endl;
  }
  
  a.push_back(10);
  cout << endl;
  for(int i = 0; i < a.size(); i++){
    cout << i << ": " << a[i] << endl;
  }
  cout << a[3] << endl;
  
  return 0;
}

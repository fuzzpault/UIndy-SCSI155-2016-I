#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> a){
  for(int i = 0; i < a.size(); i++){
    cout << i << ":" << a[i] << endl;
  }
}

int main(){
  vector<int> a(10,5);
  a.erase(a.begin());
  cout << "size: " << a.size() << endl;
    
  a.push_back(5);
  a.push_back(50);
  cout << "size: " << a.size() << endl;
  a[0] = 99;
  print(a);
  
  
  print(a);
  
}

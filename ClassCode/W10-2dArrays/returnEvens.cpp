#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

vector<int> returnEvens(vector<int> ins){
  // for loop, modulo, if, push_back
  vector<int> ret;
  for(int i = 0; i < ins.size(); i++){
    if(ins[i] % 2 == 0){
      ret.push_back(ins[i]);
    }
  }
  return ret;
}

void print(vector<int> v){
 cout << '[';
 for(int i = 0; i < v.size(); i++){
   cout << v[i] << ',';
 }
 cout << "]\n\n";
}

int main(){
  vector<int> cory;
  for(int i = 0; i < 100; i++){
    cory.push_back(rand());
  }
  
  print(cory);
  
  vector<int> evens = returnEvens(cory);
  
  print(evens);
}

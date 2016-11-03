#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;


int main(){
  vector<int> a;

  for(int i = 0; i < 1000000000; i++){
     a.push_back(rand());
  }
  
  while(1);
  
}

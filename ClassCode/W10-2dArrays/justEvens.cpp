#include <iostream>
#include <vector>

using namespace std;

bool contains(vector<unsigned long> bob, unsigned long thing){

}

vector<unsigned long> justEvens(vector<unsigned long> bob){
  // mod, for loop, if, 
  vector<unsigned long> ret;
  for(int i = 0; i < bob.size(); i++){
    // is bob[i] in ret already? No? push it to the end.
    if(bob[i] % 2 == 0){ // even
      ret.push_back(bob[i]);
    }
  }
  return ret;
}


void print(vector<unsigned long> justin){
  cout << '[';
  for(int i = 0; i < justin.size(); i++){
    cout << justin[i] << ',';
  }
  cout << "]\n\n";
}

int main(){
  vector<unsigned long> seven;
  
  unsigned long a = 7;
  for(int i = 0; i < 9; i++){
    seven.push_back(a);
    seven.push_back(a + 5);
    a = a * 10 + 7;
    // 7, 77, 777, 7777, 77777
  }
  
  print(seven);
  
  vector<unsigned long> shorter = justEvens(seven);
  
  print(shorter);
  
}

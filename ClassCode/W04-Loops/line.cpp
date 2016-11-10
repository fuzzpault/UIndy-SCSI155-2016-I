#include <iostream>

using namespace std;

int main(){
  cout << "Line length?" << endl;
  int length = 0;
  cin >> length;
 
 for(int i = 0; i < length; i++){
  cout << "."; 
 }
 
 cout << endl;
 
 return 0; 
}

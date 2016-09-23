#include <iostream>

using namespace std;

int main(){
  cout << "How wide?" << endl;
  int width = 0;
  cin >> width;
  
  for(int y = 0; y < width; y++){
    for(int x = 0; x < y; x++){
      if(x == 0){
        cout << '|'; 
      }else if(y == width - 1){
        cout << '-';
      }else{
        cout << "."; 
      }
    }
    cout << y << endl;
  }
  
  return 0;
}

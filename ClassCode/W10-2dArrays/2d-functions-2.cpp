#include <iostream>
#include <iomanip>

using namespace std;

void print(int a[][10]){
  for(int r = 0; r < 10; r++){
    for(int c = 0; c < 10; c++){
      cout << setw(3) << a[r][c] << " ";
    }
    cout << endl;
  }
} 

int main(){
  int a[10][10] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
  
  for(int r = 0; r < 10; r++){
    for(int c = 0; c < 10; c++){
      a[r][c] = r * c;
    }
  } 
  
  print(a);
  
  cout << "a[0][99] = " << a[0][99] << endl;
  
  return 0;
}

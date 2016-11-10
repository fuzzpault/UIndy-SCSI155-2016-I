#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
  /*int count = 0;
  int even_count = 0;
  for(int i = 9; i >= 0; i = i - 1){
   cout << i; 
   count = count + 1; // count++
   if(i % 2 == 0){
     even_count++; 
   }
  }
  cout << "count: " << count << endl;
  cout << "even count: " << even_count << endl;
  */
  srand(time(0));
  int width = 0;
  cin >> width;
  
  for(int y = 1; y <= width; y++){
    // print spaces
    for(int x = 0; x < y; x++){
      if(x == 0 || y == width || y == x + 1){ // border printing
        cout << "*";
      }else if(rand() % 100 < 90 ){   // inside .
        cout << ".";
      }else{ // inside emptys
        cout << " ";
      }
    }
   //cout << y << endl; 
   cout << endl;
  }
  
  
  return 0;
}

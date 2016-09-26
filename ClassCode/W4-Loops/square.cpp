#include <iostream>

using namespace std;

int main(){
  int width = 20; 
  for(int y = 1; y <= width ; y++){
    //cout << "********************" << endl;
    // This does width *
    for(int x = 1; x <= width; x++){
      if(y == width || y == 1){ // on top
        cout << "0";
      }else if(y > width/2){  // On bottom
        cout << "*";
      //}else if( ((x % 2 == 0) && (y % 2 == 0)) ||
      //          ((x % 2 == 1) && (y % 2 == 1)) ){  // On top
      }else if( (x + y) % 2 == 0 ){  // On top
        cout << "*";
      }else{
        cout << " "; 
      }
        
    }
    cout << endl;
  }
  
  cout << endl;
  
  return 0;
}

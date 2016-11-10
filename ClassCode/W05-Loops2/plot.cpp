#include <iostream>

using namespace std;

int main(){

  float char_width = 80;
  
  cout << "Enter 3 numbers to fill in the function:" << endl;
  cout << "C0 + C1 * x + C2 * x^2" << endl;
  float c0 = 0.0;
  float c1 = 0.0;
  float c2 = 0.0;
  cin >> c0;
  cin >> c1;
  cin >> c2;
  
  for(int x = -15; x<= 15; x++){
    float fx = c0 + c1 * x + c2 * x * x;
      // put in enough spaces
      int spaces = (fx + 10)/ 20 * char_width;
      cout << "|";     // Line on left side
      for(int y = 0; y < char_width; y++){
        if(y == spaces){
          cout << ".";
        }else if(x == 0 && y == char_width/2){
          cout << "+";
        }else if(x == 0){
          cout << "-";
        }else if(y == char_width/2){
          cout << "|";
        }else{
          cout << " ";
        }
      }
      cout << "|" << endl; // Line on right side
    
  }
}

/* Name: Paul Talaga
   Date: 9/18/16
   HW 3: Shape Maker
   Desc: Draws various shapes on the screen
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  cout << "Welcome to Shape-Maker!\n";
  
  /*cout << " 1:Make a horizontal line\n";
  cout << " 2:Make a number of SOS calls\n";
  cout << " 3:Make a filled-in square of '*'s\n";
  cout << " 4:Make a filled-in rectangle of '*'s\n";
  cout << " 5:Make a framed rectangle with '*'s on the outside and empty inside.\n";
  cout << " 6:Make a framed rectangle with lines.\n";
  cout << " 7:Make a half-filled-in rectangle.\n";
  cout << " 8:Make a right-triangle w/ lower left filled in\n";
  cout << " 9:Make a right-triangle w/ upper left filled in\n";
  cout << "10:Make a 10x10 multiplcation table.\n";
  */
  cout << "<menu shortened>" << endl;

  cout << "Which shape should I draw?";
  
  int input;
  cin >> input;
  
  if(input == 1){  // Line!
    cout << "How wide?";
    int width = 0;
    cin >> width;
    for(int x = 0; x < width ; x++){
      cout << "*";
    }
    cout << endl;
  }else if(input == 2){  // SOS!
      cout << "How many?";
      int width = 0;
      cin >> width;
      for(int x = 0; x < width ; x++){
        cout << "...---... ";
      }
      cout << endl;
  }else if(input == 3){ // Filled in Square!
      cout << "Size?";
      int size = 0;
      cin >> size;
      for(int y = 0; y < size ; y++){
        for(int x = 0; x < size ; x++){
          cout << "*";
        }
        cout << endl;
      }
  }else if(input == 4){ // Filled in Rectangle!
    cout << "Width?";
    int width, height;
    cin >> width;
    cout << "Height?";
    cin >> height;
    for(int y = 0; y < height ; y++){
      for(int x = 0; x < width ; x++){
        cout << "*";
      }
      cout << endl;
    }
  }else if(input == 5){ // Framed Rectangle!
    cout << "Width?";
    int width, height;
    cin >> width;
    cout << "Height?";
    cin >> height;
    for(int y = 0; y < height ; y++){
      for(int x = 0; x < width ; x++){
        if(y == 0 || y == height -1 || x == 0 || x == width-1){
          cout << "*";
        }else{
          cout << " ";
        }
      }
      cout << endl;
    }
  }else if(input == 6){ // Framed Rectangle with lines!
    cout << "Width?";
    int width, height;
    cin >> width;
    cout << "Height?";
    cin >> height;
    for(int y = 0; y < height ; y++){
      for(int x = 0; x < width ; x++){
        // Corners of +
        if((y == 0 && x == 0) || 
          (y == height-1 && x == 0) ||
          (y == 0 && x == width-1) ||
            (y == height-1 && x == width-1)){
              cout << '+';
        }else if(y==0 || y == height-1){
          cout << '-';
        }else if(x==0 || x == width-1){
          cout << '|';
        }else{
          cout << " ";
        }
      }
      cout << endl;
    }
  }else if(input == 7){ // Half-filled-in Rectangle!
    cout << "Width?";
    int width, height;
    cin >> width;
    cout << "Height?";
    cin >> height;
    for(int y = 0; y < height ; y++){
      for(int x = 0; x < width ; x++){
        if(y == 0 || y == height -1 || x == 0 || x == width-1){
          cout << "*";
        }else if((x + y) % 2 == 0){
          cout << "*";
        }else{
          cout << " ";
        }
      }
      cout << endl;
    }
  }else if(input == 8){ // Lower Left right-triangle
    int height;
    cout << "Height?";
    cin >> height;
    for(int y = 0; y < height ; y++){
      for(int x = 0; x < height ; x++){
        if(x <= y){
          cout << "*";
        }else{
          cout << " ";
        }
      }
      cout << endl;
    }
  }else if(input == 9){ // Upper Left right-triangle
    int height;
    cout << "Height?";
    cin >> height;
    for(int y = 0; y < height ; y++){
      for(int x = 0; x < height - y ; x++){
        cout << "*";
      }
      cout << endl;
    }
  }else if(input == 10){ // Multiplication table
    for(int y = 1; y <= 10; y++){
      for(int x = 1; x <= 10; x++){
        cout << setw(4) << x * y;
      }
      cout << endl;
    }
  }else{
    cout << "Invalid entry!\n";
  }
  
  return 0;
}

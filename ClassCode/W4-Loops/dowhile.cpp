#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
  cout << "Guessing game, pick a number below 100." << endl;
  int number = 89;//rand() % 100;
  int guess = 0;
  
  
  do{
    cin >> guess;
    cout << "That's not right!" << endl;
    if(guess < number){
      cout << "You are low, try again." << endl;
    }else{
      cout << "You are high, try again." << endl;
    }
  }while(guess != number);
  cout << "Congraduations, you guessed correct!" << endl;
 
 
 return 0; 
}

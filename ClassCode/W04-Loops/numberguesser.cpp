#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
  cout << "Guessing game, pick a number below 100." << endl;
  int number = rand() % 100;
  int guess = 0;
  
  cin >> guess;
  while(guess != number){
    cout << "That's not right!" << endl;
    if(guess < number){
      cout << "You are low, try again." << endl;
    }else{
      cout << "You are high, try again." << endl;
    }
    cin >> guess;
  }
  cout << "Congraduations, you guessed correct!" << endl;
 
 
 return 0; 
}

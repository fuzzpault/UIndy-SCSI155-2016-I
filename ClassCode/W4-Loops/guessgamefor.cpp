#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess_count = 1;
    
    cout << "Enter your guess between 1 and 100 inclusive:" << endl;
    int guess = 0;
    cin >> guess;
    
    for( ; guess != number ; ){
    //while(guess != number){
      guess_count++;
      cout << "That's not right" << endl;
      if(guess > number){
        cout << "Too high" << endl;
      }else{
        cout << "Too low" << endl;
      }
      cout << "Guess again: " << endl;
      cin >> guess;
    }
    
    cout << "It took you " << guess_count << " guesses." << endl;
    cout << "Congratuations! You got it!" << endl;
    
    return 0;
}

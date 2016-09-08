// Name: Change Me
// HW 2: RPG I
// Desc: A simple RPG story

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
  // Seed random number generator
  srand(time(0));

  cout << "Welcome to UIndy RPG!\n\n";
  
  int life = 100;
  bool ans = 0;
  
  cout << "You are standing in front of Schwitzer.\n";
  cout << "Do you want to get a free donut? (0/1)\n";
  
  cin >> ans;
  if(ans == 1){
    cout << "You ate the donut and got 10 life\n";
    life = life + 10;
    cout << "Life now: " << life << endl; 
  }
  
  cout << endl <<"Oh no, a dog is nibbling on your foot!" << endl;
  
  int  chance = rand() % 100;
  if(chance < 10){    // 10% chance
    cout << "He ate your leg!\n";
    life = life -50;
    cout << "Life now: " << life << endl; 
  }else if(chance < 50){  // 40% chance
    cout << "He ate you toe!\n";
    life = life - 10;
    cout << "Life now: " << life << endl;
  }else{    // 50% chance
    cout << "Phew, he just licked your shoe!\n";
    cout << "Life now: " << life << endl;
  }
  
  cout << endl << "Final life: " << life << endl;
  if( life > 0){
    cout << "You survived UIndy!\n";
  }else{
    cout << "Sorry, you died!\n";
  }
      
    
  return 0;
}

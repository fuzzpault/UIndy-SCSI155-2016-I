#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

const int SIZE = 10;

string randomPlace(){
  string places[] = {"store", "Walmart", "club", "gym", "class", "cemetary"};
  return places[rand() % 6];
}

string randomThing(){
  string things[] = {"eggs", "bacon", "milk", "boxes", "lamps"};
  return things[rand() % 5];
}

int cory_count = 0;
string randomSentence(){
 string s[] = {"I went to the " + randomPlace() + " to get some " + randomThing() + ".",
   "Cory decided to go to the " + randomPlace() + "."};
 //return s[rand() % 2];
 if(cory_count % 2 == 0){
   cory_count++;
   return s[0];
 }else{
   cory_count++;
   return s[1];
 }
}

int main(){
  // srand will go here
  string thing[SIZE];
  
  cory_count = 0;
  for(int i = 0; i < SIZE; i++){
    thing[i] = randomSentence();
  }
  
  for(int i = 0; i < SIZE; i++){
    cout << i << ":" << thing[i] << endl;
  }
  
  
  
  return 0;
}

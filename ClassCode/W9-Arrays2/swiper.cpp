/* Name: Paul Talaga
   Date: 10/25/16
   Desc: Program to store and return the ID of someone using a 
         USB magnetic swipe reader (student ID card).
         Uses 3 arrays to store user information and to keep track of how
         many 'swipes' you have left on your card.
*/
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
const int DBSIZE = 5;

int id2index(string ids[], string swipe){
  for(int i = 0; i < DBSIZE; i++){
    if(swipe == ids[i])return i;
  }
  return -1;
}

int main(){
  string ids[DBSIZE];
  string names[DBSIZE];
  int count[DBSIZE];
  int num_stored = 0;
  
  while(1){
    string swipe;
    cout << "Swipe your card now" << endl;
    cin >> swipe;
    // See if we know this person already
    int index = id2index(ids, swipe);
    if(index == -1 && num_stored != DBSIZE){
      // new person!
      cout << "This is a new user, what is the name?" << endl;
      string name;
      cin >> name;
      ids[num_stored] = swipe;
      names[num_stored] = name;
      cout << "How many swipes do you want?" << endl;
      int swipes;
      cin >> swipes;
      count[num_stored] = swipes;
      num_stored++;
    }else if(index == -1){
      cout << "Database full, sorry!" << endl;
    }else if(count[index] <= 0){
      cout << "You don't have any swipes left, you must starve!" << endl;
    }else if(rand() % 5 == 0){
      cout << "Congratuations " << names[index] << ", you get a free swipe!" << endl;
      cout << "You have " << count[index] << " swipes left." << endl << endl;
    }else{
      // Found them!
      cout << "Hello " << names[index] << endl;
      cout << "You have " << --count[index] << " swipes left." << endl << endl;
      
      //cout << "There are " << num_stored << " users registered." << endl;
    }
  
  }
  return 0;
}

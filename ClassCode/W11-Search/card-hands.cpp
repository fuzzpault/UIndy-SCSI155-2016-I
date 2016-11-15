/* Name: Paul Talaga
   Date: 11/8/16
   Desc: Creates a deck of cards, encoded as integers, into an array, 
         shuffles them, and prints them to the screen in a
         'normal' way.
         This is a great starter for the HW!
*/
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

string suits[] = {"Hearts", "Spades", "Diamonds", "Clubs"};
string values[] = {"2","3","4","5","6","7","8","9","10","Jack","Queen",
                    "King", "Ace"};

int getSuit(int card){
  return card / 13;
}

int getValue(int card){
  return card % 13;
}

void print(int d[], int length){
  for(int i = 0; i < length; i++){
    //cout << d[i] << endl;
    cout << values[ getValue(d[i]) ] << " of " << suits[ getSuit(d[i]) ] << endl;
  }
}

void shuffle(int d[], int length){
  for(int i = 0; i < length; i++){
    int other = rand() % length;
    int temp = d[i];
    d[i] = d[other];
    d[other] = temp;
  }
}

bool royalty(int h[], int length){
  int num_kings = 0;
  int num_queens = 0; 
  for(int i =0; i< length;i++){
    if(getValue(h[i]) == 11){  // king
      num_kings++;
    }
    if(getValue(h[i]) == 10){  // queen
      num_queens++;
    }
  }
  return num_kings > 0 && num_queens > 0;
  
}

int main(){
  srand(time(0));
  int deck[52];
  for(int i = 0; i < 52; i++){
    deck[i] = i;
  }
  
  int royalty_count = 0;
  
  for(int i =0 ;i< 100000; i++){
    
    shuffle(deck, 52);
    //print(deck, 52);
    int hand1[5];
    int hand2[5];
    for(int i =0; i < 5 ;i++){
      hand1[i] = deck[i];
      hand2[i] = deck[i+47];
    }
    
    /*cout << "hand1" <<endl;
    print(hand1,5);
    cout << "hand2" <<endl;
    print(hand2,5);
    */
    //hand1[0] = 10;
    //hand1[1] = 10 + 13+1; 
    //print(hand1,5);
    //cout << royalty(hand1,5);
    if(royalty(hand1,2)){ 
      royalty_count++;
    }
  }  
  
  cout << royalty_count/100000.0 * 100 << "%" <<endl;
  
  
}

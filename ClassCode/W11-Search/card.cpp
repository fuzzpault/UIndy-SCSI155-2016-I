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

int main(){
  srand(time(0));
  int deck[52];
  for(int i = 0; i < 52; i++){
    deck[i] = i;
  }
  
  
  
  shuffle(deck, 52);
  print(deck, 52);
  
  
}

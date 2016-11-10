#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;

string suit[] = {"Diamonds", "Clubs", "Spades", "Hearts"};
string value[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10",
                  "Jack", "Queen", "King", "Ace"};

string getSuit(int card){
  return suit[ card / 13];
}

string getValue(int card){
  return value[ card % 13 ];
}

void print(int array[], int length){
  for(int i = 0; i < length; i++){
    cout << getValue(array[i]) << " of " << getSuit(array[i]) << endl;
  }
}

void print_sneaky(vector<int> v){
  print(v.data(), v.size());
}

void print(vector<int> v){
  for(int i = 0; i < v.size(); i++){
    cout << getValue(v[i]) << " of " << getSuit(v[i]) << endl;
  }
}

void shuffle(int array[], int length){
  for(int i = 0; i < length; i++){
    int swap = rand() % length;
    int temp = array[i];
    array[i] = array[swap];
    array[swap] = temp;
  }
}

void shuffle(vector<int>& v){ // Must be pass-by-reference to change deck2 below
  for(int i = 0; i < v.size(); i++){
    int swap = rand() % v.size();
    int temp = v[i];
    v[i] = v[swap];
    v[swap] = temp;
  }
}

int main(){

  //string card[52][2];  //PGT does not suggest
  srand(time(0));
  int deck[52];
  vector<int> deck2;
  
  for(int i = 0; i < 52; i++){
    deck[i] = i;
    //deck2[i] = i; // BAAAAAD
    deck2.push_back(i);
  }
  
  
  //print(deck, 52);
  //cout << "Shuffled:" << endl;
  shuffle(deck, 52);
  shuffle(deck2);
  
  //print(deck, 52);
  //print(deck2);
  
  // Create 2 hands
  /*
  int hand1[5];
  int hand2[5];
  for(int i = 0; i < 5; i++){
    hand1[i] = deck[i];
  }
  for(int i = 0; i < 5; i++){
    hand2[i] = deck[i+5];
  }
  cout << "Hand1: " << endl;
  print(hand1, 5);
  cout << "Hand2: " << endl;
  print(hand2, 5);
  */
  // for vectors
  vector<int> hand1v;
  vector<int> hand2v;
  for(int i = 0; i < 5; i++){
    hand1v.push_back(deck2[i]);
  }
  for(int i = 0; i < 5; i++){
    hand2v.push_back(deck2[i+5]);
  }
  cout << "Hand1: " << endl;
  print(hand1v);
  cout << "Hand2: " << endl;
  print(hand2v);


  return 0;
}

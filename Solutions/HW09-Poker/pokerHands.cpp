/* Name: Paul Talaga
   Date: 11/15/16
   Desc: Solution to Poker Hands assignment
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>

// http://www.math.hawaii.edu/~ramsey/Probability/PokerHands.html

using namespace std;

vector<int> getDeck(){
  // Get a deck of cards.
  // A card is encoded as an integer.  See the getSuit and getValue functions.
  vector<int> ret;
  for(int i = 0; i < 52; i++){
    ret.push_back(i);
  }
  return ret;
}

// Global arrays defining suits
string suits[4] = {"Clubs", "Diamonds", "Spades", "Hearts"};
string value[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10",
                     "Jack", "Queen", "King", "Ace"};
                     
                     
int getSuit(int card){
  // Encode the suit of a card by encoding it in the value.
  return card / 13;
}

int getValue(int card){
  // Encode the suit of a card by encoding it in the value.
  return card % 13;
}

void randomize(vector<int>& cards){
  // For each elemennt in the vector, exchange it with a random element.
  // https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle
  for(int i = cards.size() - 1; i >= 1; i--){
    float temp = cards[i];
    int new_loc = rand() % (i + 1);
    cards[i] = cards[new_loc];
    cards[new_loc] = temp;
  }
}

void print(const vector<int>& hand){
  // Print the hand/vector.  Use a const reference for speed.
  for(int i = 0; i < hand.size(); i++){
    cout << value[ getValue( hand[i])] << " of " << suits[ getSuit( hand[i])];
    cout << endl;
  }
}

bool isFlush(const vector<int>& hand){ // All the same suit
  // Get the suit of the first card and verify all the others match.
  int suit = getSuit(hand[0]);
  for(int i = 1; i < hand.size(); i++){
    if(suit != getSuit(hand[i]))return false;
  }
  // If the function didn't return already, everything must be good.
  return true;
}

bool hasValue(const vector<int>& hand, int value){
  // See if a hand contains a card with a specific value.
  for(int i = 0; i < hand.size(); i++){
    if(getValue(hand[i]) == value)return true; 
  }
  return false;
}

bool isStraight(const vector<int>& hand){
  // find min value
  int min = getValue( hand[0]);
  for(int i = 0; i < hand.size(); i++){
    if(getValue( hand[i]) < min) min = getValue( hand[i]);
  }
  // Now go up 4 from min
  for(int value = min + 1; value <= min + 4; value++){
   if(!hasValue(hand, value)){
     return false; 
   }
  }
  return true;
}

bool isStraightFlush(const vector<int>& hand){
  // If it's a straight and a flush, it's a straight flush
  return isStraight(hand) && isFlush(hand);
}

bool isRoyalFlush(const vector<int>& hand){
  // If it's a straight, a flush, and has an ace, it's a royal flush
  return hasValue(hand, 12) && isStraight(hand) && isFlush(hand);
}

int highCard(const vector<int>& hand){
  // Get the highest card's value.
  // This is the max algorithm
  int max = getValue(hand[0]);
  for(int i = 0; i < hand.size();i++){
    if( getValue(hand[i]) > max){
      max = getValue(hand[i]);
    }
  }
  return max + 2; // The +2 is due to the fact that "2" is really 0
}

int getStrength(const vector<int>& hand){
  // Get the strength of a hand.  Since highCard gives values from
  // 2 up to 14 (ace), we keep going up in power with the other
  // hands.  So to find a winner or a tie, just compare the 
  // strengths of two hands.
  if(isRoyalFlush(hand))return 18;
  if(isStraightFlush(hand))return 17;
  if(isFlush(hand))return 16;
  if(isStraight(hand))return 15;
  return highCard(hand);
}

int main(){
  srand(time(0));
  cout << "How many rounds should I simulate?" << endl;
  int rounds = 10000000;
  cin >> rounds;  // Comment this line out to auto do 10 million.
  
  // Set up stat variables.
  int num_flush = 0;
  int num_straight = 0;
  int num_straight_flush = 0;
  int num_royal = 0;
  int num_high = 0;
  int num_tie = 0;
  
  // Create a new randomized deck of cards  
  vector<int> deck = getDeck();
  
  for(int r = 0; r < rounds; r++){
    
    // Rather than create a new deck each time, we randomize the current one.
    randomize(deck);
    // Put cards into each hand
    vector<int> hand1;
    vector<int> hand2;
    // Rather than move cards from the deck to each hand, we just copy
    // the first 5 cards to the hand1, and the next 5 to hand2.
    for(int i = 0; i < 5; i++){
      hand1.push_back(deck[i]);
      hand2.push_back(deck[i]);
      //hand1[i] = deck[i];  // If we use an array or initilalize the vector
      //hand2[i] = deck[i+5];// this could be faster.
    }
    
    // See if the cards match a hand, and increment the counters.
    if(isFlush(hand1))num_flush++;
    if(isFlush(hand2))num_flush++;
    
    if(isStraight(hand1))num_straight++;
    if(isStraight(hand2))num_straight++;
    
    if(isStraightFlush(hand1))num_straight_flush++;
    if(isStraightFlush(hand2))num_straight_flush++;
    
    if(isRoyalFlush(hand1))num_royal++;
    if(isRoyalFlush(hand2))num_royal++;
    
    num_high+= highCard(hand1);
    num_high+= highCard(hand2);
    
    if(getStrength(hand1) == getStrength(hand2))num_tie++;
    
  }
  
  // Remember one round really is 2 hands, so divide by 2
  cout << endl << "Simulated Values (out of 100%):" << endl;
  cout << "    Flush: " << num_flush * 100.0 / 2 /(double)rounds << endl;
  cout << " Straight: " << num_straight * 100.0 / 2 / (double)rounds << endl;
  cout << "Str Flush: " << num_straight_flush * 100.0 / 2 / (double)rounds << endl;
  cout << "Roy Flush: " << num_royal * 100.0 / 2 / (double)rounds << endl;
  cout << " Avg High: " << num_high / 2.0 / (double)rounds << endl;
  cout << "      Tie: " << num_tie * 100.0 / (double)rounds << endl;
  
  cout << endl << "Mathematicaly Correct Values:" << endl;
  cout << "    Flush: 0.1980" << endl;
  cout << " Straight: 0.3546" << endl;
  cout << "Str Flush: 0.001539" << endl;
  cout << "Roy Flush: 0.0001539" << endl;
  cout << " Avg High: 12.833" << endl;
  cout << "      Tie: ??" << endl;
  
}


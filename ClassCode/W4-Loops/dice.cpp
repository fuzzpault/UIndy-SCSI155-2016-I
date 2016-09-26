#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
  srand(time(0));
  int sides = 0;
  cout << "How many sided die would you like?" << endl;
  cin >> sides;
  char choice = 'y';
  while(choice == 'y'){
    cout << "You rolled a " << rand() % sides + 1 << endl;
    cout << "Another roll y/n?";
    cin >> choice;
  }
  
  
  return 0;
}

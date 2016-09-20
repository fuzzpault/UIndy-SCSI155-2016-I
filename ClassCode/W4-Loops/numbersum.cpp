#include <iostream>

using namespace std;

int main(){
  
    cout << "Enter two number less than 100." << endl;
    int n1 = 0;
    int n2 = 0;
    cin >> n1;
    cin >> n2;
    while(n1 > 100 && n2 > 100){
      cout << "You idiot, i want 2 numbers less than 100." << endl;
      cout << "Please try again:" << endl;
      cin >> n1;
      cin >> n2;
    }
    cout << "Thanks!  The sum of them is: " << n1 + n2 << endl;
    
    
    return 0;
}

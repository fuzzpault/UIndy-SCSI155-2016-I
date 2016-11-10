#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(){
    // Take in integers until a -1 is entered.
    // Then print the sum, average, max and min that was entered.
    int number = 0;
    int count = -1;
    int sum = 0;
    int max = 0;
    int min = 0;
    cout << "Enter numbers and exit with a -1." << endl;
    
    
    while(number != -1){
      sum = sum + number;
      if(count == 0){
        min = number;
        max = number; 
      }
      if(number > max){
        max = number;
      }
      if(number < min){
       min = number; 
      }
      count++;
      cin >> number;  
    }
    
    cout << "Sum: " << sum << endl;
    cout << "Count: " << count << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    
    return 0;
}

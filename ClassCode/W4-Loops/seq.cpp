#include <iostream>

using namespace std;

int main(){
  cout << "Enter a low and high value" << endl;
  int low = 0; 
  int high = 0;
  cin >> low;
  cin >> high;
  if( low > high){
    cout << "Those are not in the correct order" << endl;
    return 0; 
  }
 
 cout << "Difference is: " << high - low << endl;
 
 int sum = 0;
 int sum2 = 0;
 int evens = 0;
 int odds = 0;
 
 for(int i = low; i <= high; i++){
   sum += i;
   sum2 += i * i;
   if( i % 2 == 0){
       evens++; 
   }else{
     odds++;
   }
 }
 cout << "Sum: " << sum << endl;
 cout << "Sum of squares: " << sum2 << endl;
 cout << "Evens: " << evens << endl;
 cout << "Odds: " << odds << endl;
 
 
 
 cout << endl;
 
 return 0; 
}

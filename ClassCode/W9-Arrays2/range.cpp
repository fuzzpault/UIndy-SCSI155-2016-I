/* Name: Paul Talaga
   Date: 10/28/16
   Desc: A demonstration of C++11 features:
   Range-based for loops, and the auto type keyword.
   To enable these features in DevC++, got to Tools->Compiler Options
   and then enter '-std=c++11' in the 'add commands when calling 
   compiler', and check the box.
   These code below will NOT  be tested, but good to know for the future!
*/

#include <iostream>

using namespace std;

int main(){
   string a[] = {"bob","bill"};
   
   /*for(int i = 0; i < 3; i++){ // 
     cout << a[i] << endl;
   } */
   
   // The above loop is nearly identical to the one below.  The advantage
   // of the below version is you can't acidentially go outside the array
   // bounds.
   for(auto item : a){
     cout << item << endl;
   } 
}

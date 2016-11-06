/* Name: Paul Talaga
   Date: 11/1/16
   Desc: Demonstration of creating a very large vector.
*/
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;


int main(){
  vector<int> a;  // After this statement the vector is empty.

  // We add 1 billion random integers onto the end of the vector.
  // Since each int is 4 bytes, this should take up 4GB of memory!

  for(int i = 0; i < 1000000000; i++){
     a.push_back(rand());
  }
  
  while(1); // Do nothing so we can check the memory usage.
  
}

/* Name: Paul Talaga
   Date: 10/21/16
   Desc: Demonstration of creating a HUGE array on the heap (not the stack).
         This is done via the 'new' keyword, to be talked about at the end
         of CSCI 155.
         For the larger arrays, you'll see the program pause before printing,
         this is a result of the OS having to move programs around in mem
         to find a CONTIGUOUS block of memory.
*/
#include <iostream>

using namespace std;

// If the array was on the heap, 1000000 was too big!
// This next line attempts to create a 12GB array!  This likely will give 
// a 'bad-alloc' if you don't have that much ram!
//long unsigned int SIZE = 5000000000;
// Note Windows 10 compresses memory, so it may not look that big

// This array will need about 40MB, more than tooBig failed at.
long unsigned int SIZE = 10000000;

int main(){
  int* bob = new int[SIZE];  // An int* is the same as an array,
                             // We'll talk about this later in CSCI-155

  // Fill it with numbers!
  for(unsigned int i = 0; i < SIZE; i++){
    bob[i] = i * 2;
  }
  
  for(unsigned int i = 0; i < SIZE; i++){
    cout << i << ":" << bob[i] << endl;
  }
  cout << "done" << endl;
  
  // Since we used memory on the heap, we're requred to give it back.
  delete[] bob;
  
  return 0;
}

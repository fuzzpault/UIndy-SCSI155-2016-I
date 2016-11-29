/* Name: <your name here>
   Date: <date>
   Desc: Pointer exercise for CSCI 155
*/
#include <iostream>
#include <cassert>

using namespace std;

// Fill in the following functions
void doStuff(float* thing){
  // TODO: Fill me in
  return;
}

// Return a pointer to a new integer array with the given length, with all
// elements initialized to 0.
int* init(int desired_length){
  // TODO: Fill me in
  return NULL;
}

// Return a pointer to a new integer array with the given length, with all
// elements initialized to value.
int* init(int desired_length, int value){
  // TODO: Fill me in
  return NULL;
}

// Return a pointer to a new integer array with the given length, with the
// first element value, and the rest increasing by step.
int* init(int desired_length, int value, int step){
  // TODO: Fill me in
  return NULL;
}

// Return the sum of the given array.  Array should not change.
int sum(int* array, int length){
  // TODO: Fill me in
  return 0;
}

// Return a pointer to a new integer array, length size, with each element
// the sum of the elements of array1 and array2.  Assume array1 and array2
// are the same length.   Array1 and array2 should not change.
int* add(int* array1, int* array2, int length){
  // TODO: Fill me in
  return array1;
}

// Return a pointer to a new integer array, length size, with each element
// the product of the elements of array1 and array2.  Assume array1 and array2
// are the same length.  Array1 and array2 should not change.
int* multiply(int* array1, int* array2, int length){
  // TODO: Fill me in
  return array1;
}

// Return a pointer to a new integer array, just like array (same length),
// with all values copied from array.  Array should not change.
int* duplicate(int* array, int length){
  // TODO: Fill me in
  return array;
}

// Return a pointer to a new integer array, containing the same elements of
// array, but sorted.  Array should not change.
int* copyAndSort(int* array, int length){
  // TODO: Fill me in
  return array;
}

int main(){
  srand(time(0));

  float number = 3.1415;
  float* n2 = &number;
  doStuff(n2);
  assert(number > 10);

  const int LENGTH = 1000000;
	int* zeros = init(LENGTH);
  int* tens  = init(LENGTH, 10);
	assert(zeros[0] == 0);
  assert(zeros[1000] == 0);
  assert(tens[0] == 10);
  assert(tens[10000] == 10);

  int* twenty = add(tens, tens, LENGTH);
  assert(twenty[50] == 20);
  assert(twenty[LENGTH-1] == 20);

  int* ones = init(LENGTH, 1);
  int* ran = init(LENGTH/4);
  for(int i = 0; i < LENGTH/4; i++){
    ran[i] = rand() % 100;
  }
  int* ran2 = add(ran, ones, LENGTH/4);
  assert(sum(ran,LENGTH/4) + LENGTH/4 == sum(ran2, LENGTH/4));

  int* inc_one = init(LENGTH/10, 1, 1);
  assert( sum(inc_one,LENGTH/10) == LENGTH/10 * (LENGTH/10+1)/ 2 );

  int* small = init(20, 0, 5);
  int* temp = duplicate(small, 20);
  temp = multiply(small, temp, 20);
  assert( sum(temp, 20 ) == 61750);

  ran[60] = -10;
  ran[35] = -5;
  int* temp2 = copyAndSort(ran, 100);
  assert( ran[60] == -10);
  assert( ran[35] == -5);
  assert(sum(temp2, 100) == sum(ran, 100));
  assert(temp2[0] == -10);
  assert(temp2[1] == -5);

  cout << "All tests passed!" << endl;

  // Return all dynamic memory
  delete[] zeros;
  delete[] tens;
  delete[] twenty;
  delete[] ones;
  delete[] ran;
  delete[] ran2;
  delete[] inc_one;
  delete[] small;
  delete[] temp;
	
  return 0;
}

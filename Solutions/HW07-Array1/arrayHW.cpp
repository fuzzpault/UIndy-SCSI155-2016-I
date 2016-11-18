/* Name: Paul Talaga
   Date: 10/15/16
   Desc: Solution to Array Operations 1
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

void init(int array[], int length, int value){
  for(int i = 0; i < length; i++){
    array[i] = value;
  }
}

void init(string array[], int length, string value){
  for(int i = 0; i < length; i++){
    array[i] = value;
  }
}

int count(int array[], int length, int value){
  if(length <= 0)return 0;
  int c = 0;
  for(int i = 0; i < length; i++){
    if(array[i] == value)c++;
  }
  return c;
}

int count(string array[], int length, string value){
  if(length <= 0)return 0;
  int c = 0;
  for(int i = 0; i < length; i++){
    if(array[i] == value)c++;
  }
  return c;
}

int range(int array[], int length){
  if(length <= 1)return 0;
  int min = array[0];
  int max = array[0];
  for(int i = 1; i < length; i++){
    if(min > array[i])min = array[i];
    if(max < array[i])max = array[i];
  }
  return max-min;
}

void histogram(int array[], int length){
  int counts[21] = {};
  for(int i = 0; i < length; i++){
    counts[array[i] ]++;
  }
  for(int i = 0; i <= 20;i++){
    cout << setw(2) << i << ":";
    for(int j = 0; j < counts[i]; j++){
      cout << "*";
    }
    cout << endl;
  }
}

bool containsDups(int array[], int length){
  for(int i = 0; i < length; i++){
    if(count(array, length, array[i]) != 1)return true;
  }
  return false;
}

bool isSorted(int array[], int length){
  if(length <= 1) return true;
  for(int i = 0; i < length-1; i++){
    if(array[i] > array[i+1])return false;
  }
  return true;
}


int main(){
  cout << "Init w/ ints" << endl;
  int a1[] = {1,2,3,4,5};
  init(a1, 5, 99);
  cout << "99 = " << a1[3] << endl;
  cout << "99 = " << a1[1] << endl;
  
  cout << endl << "Init w/ strings" << endl;
  string a2[] = {"", "Bla", "What?", "You don't say!"};
  init(a2, 4, "Empty");
  cout << "Empty = " << a2[0] << endl;
  cout << "Empty = " << a2[3] << endl;

  cout << endl << "Count w/ ints" << endl;
  int a3[] = {1,2,3,4,5,6,7,1,2};
  cout << "1 = " << count(a3, 9, 5) << endl;
  cout << "2 = " << count(a3, 9, 1) << endl;
  int a4[100];
  for(int i = 0; i < 100; i++){
    a4[i] = (i + i %7 ) % 11;
  }
  cout << "8 = " << count(a4, 100, 5) << endl;
  cout << "9 = " << count(a4, 100, 1) << endl;
  
  cout << endl << "Count w/ strings" << endl;
  string a5[] = {"blab", "ha", "ha"};
  cout << "1 = " << count(a5, 3, "blab") << endl;
  cout << "2 = " << count(a5, 3, "ha") << endl;
  
  cout << endl << "Range" << endl;
  int a6[] = {1,2,1,10,-5,34};
  cout << "39 = " << range(a6, 6) << endl;
  cout << "9  = " << range(a6, 4) << endl;
  
  cout << endl << "Contains Dups" << endl;
  cout << "1 = " << containsDups(a6, 6) << endl;
  cout << "0 = " << containsDups(a6, 2) << endl;
  cout << "1 = " << containsDups(a4, 100) << endl;
  
  cout << endl << "Is Sorted" << endl;
  int a7[] = {1,2,2,3,5,10,100};
  int a8[] = {1,2,3,4,4,5,4};
  cout << "0 = " << isSorted(a6, 6) << endl;
  cout << "1 = " << isSorted(a1, 5) << endl;
  cout << "1 = " << isSorted(a7, 7) << endl;
  cout << "0 = " << isSorted(a8, 7) << endl;
  
  cout << endl << "Histograms" << endl;
  histogram(a8,7);
  cout << endl;
  int a9[500] = {};
  for(int i = 0; i < 500; i++){
    a9[i] = (rand() % 11) + (rand() % 11);
  }
  histogram(a9, 500);
  cout << endl;
  int a10[100] = {};
  for(int i = 0; i < 100; i++){
    a10[i] = (i + i %7 ) % 15;
  }
  histogram(a10,100);
  
  return 0;
}

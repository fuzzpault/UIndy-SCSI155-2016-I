/*
Name: <fill me in>
Date: <fill me in>
Assignment: <fill me in>
Description: <fill me in>
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

void init(int array[], int length, int value){
  // TODO: Fill me in
}

void init(string array[], int length, string value){
  // TODO: Fill me in
}

int count(int array[], int length, int value){
  // TODO: Fill me in
}

int count(string array[], int length, string value){
  // TODO: Fill me in
}

int range(int array[], int length){
  // TODO: Fill me in
}

void histogram(int array[], int length){
  // TODO: Fill me in
}

bool containsDups(int array[], int length){
  // TODO: Fill me in
}

bool isSorted(int array[], int length){
  // TODO: Fill me in
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

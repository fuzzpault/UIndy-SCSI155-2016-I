/* Name: Paul Talaga
   Date: 11/8/16
   Desc: Loads a text file into a vector and allows the user to search it
         using a linear and binary search, with the # ms to search given.
*/
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <fstream>
#include <vector>

using namespace std;

int main(){

  ifstream file;
  file.open("dictionary.txt");
  vector<string> words;
  clock_t start = clock();
  
  while(!file.eof()){
    string word;
    file >> word;
    words.push_back(word);
  }
  clock_t stop = clock();
  cout << (float)(stop - start) * 100 / CLOCKS_PER_SEC << " ms to load." <<endl;
  
  file.close();
  
  cout << "Words: " << words.size() << endl;
  while(1){
    string word;
    cout << "What word should I search for?" << endl;
    cin >> word;
    
    start = clock();
    for(int i = 0; i < words.size(); i++){
      if(word == words[i]){
        cout << word << " is a word!\n";
        break;
      }
    }
    for(int j = 0; j < 100; j++){
      for(int i = 0; i < words.size(); i++){
        if(word == words[i]){
          break;
        }
      }
    }
    
    cout << (float)(clock() - start) * 100 / CLOCKS_PER_SEC << " ms to search." <<endl;
  
    // Currently does not work correctly.
    // Binary search
    start = clock();
    int bstart = 0;
    int end = words.size();
    while(end >= bstart){
      int middle = bstart + (end - bstart) / 2;
      if( words[middle] == word){
        cout << "Found a " << word << " in index " << middle << endl;
        break;
      }
      if(words[middle] > word){
        end = middle - 1;
      }else{
        bstart = middle + 1;
      }
      
    }
    cout << (float)(clock() - start) * 100 / CLOCKS_PER_SEC << " ms to search binary." <<endl;
  }
}

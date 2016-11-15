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
    // make lowercase
    for(int i = 0; i < word.length(); i++){
      if(word[i] >= 'A' && word[i] <= 'Z'){
        word[i] = word[i] - 'A' + 'a';
      }
    }
    words.push_back(word);
  }
  clock_t stop = clock();
  cout << (float)(stop - start) * 100 / CLOCKS_PER_SEC << " ms to load." <<endl;
  
  file.close();
  
  cout << "Num Words Loaded: " << words.size() << endl;
  
  // Keep asking for words to look up.
  while(1){
    string word;
    cout << "What word should I search for?" << endl;
    cin >> word;
    
    int compares = 0;
    
    // Linear search
    start = clock();
    for(int i = 0; i < words.size(); i++){
      compares++;
      if(word == words[i]){
        cout << word << " is a word!\n";
        break;
      }
    }
    // Repeat the search 100 times so the timing code has less error.
    for(int j = 0; j < 100; j++){
      for(int i = 0; i < words.size(); i++){
        if(word == words[i]){
          break; // Will break out of the inner for loop, not the j one.
        }
      }
    }
    
    cout << (float)(clock() - start) * 100 / CLOCKS_PER_SEC << " ms to do linear search." <<endl;
    cout << "Compares for linear: " << compares << endl;
  
    // Binary search
    compares = 0;
    start = clock();
    int bstart = 0;
    int end = words.size();
    while(end > bstart){
      int middle = bstart + (end - bstart) / 2;
      compares++;
      if( words[middle] == word){
        cout << "Found a " << word << " in index " << middle << endl;
        break;
      }
      compares++;
      if(words[middle] > word){
        end = middle - 1;
      }else{
        bstart = middle + 1;
      }
      
    }
    
    // Repeat the search 100 times so the timing code has less error.
    for(int j = 0; j < 100; j++){
      bstart = 0;
      end = words.size();
      while(end > bstart){
        int middle = bstart + (end - bstart) / 2;
        //cout << words[middle] << endl;
        if( words[middle] == word){
          //cout << "Found a " << word << " in index " << middle << endl;
          break;
        }
        if(words[middle] > word){
          end = middle - 1;
        }else{
          bstart = middle + 1;
        }
        
      }
    }
    cout << (float)(clock() - start) * 100 / CLOCKS_PER_SEC << " ms to search binary." <<endl;
    cout << "Compares for binary: " << compares << endl;
  }
}

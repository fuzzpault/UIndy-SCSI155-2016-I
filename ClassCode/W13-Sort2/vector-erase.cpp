/* Name: Paul Talaga
   Date: 11/21/16
   Desc: Vector erase demo, like moving cards from a deck to 2 hands.
*/
#include <iostream>
#include <vector>

using namespace std;

void print(vector<string> v){
  for(int i = 0; i < v.size(); i++){
    cout << i << " : " << v[i] << endl;
  }
}

int main(){
  vector<string> v;
  v.push_back("silence");
  v.push_back("sleep");
  v.push_back("darth vader");
  v.push_back("jingle");
  v.push_back("surgery");
  v.push_back("food");
  v.push_back("water");
  
  vector<string> h1;
  vector<string> h2;
  
  for(int i = 0; i < 2; i++){
    h1.push_back(v[0]);
    v.erase(v.begin());
    
    h2.push_back(v[0]);
    v.erase(v.begin());
  }
  
  cout << "H1: " << endl;
  print(h1);
  cout << "H2: " << endl;
  print(h2);
  cout << "Rest: " << endl;
  print(v);
  
  return 0;
  
}


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int sumofAscii(string word){
  int sum = 0;
  for(int i = 0; i < word.length(); i++){
    sum = sum + word[i];
  }
  return sum;
}

int maxASCIIStringPosition(vector<string> input_strings){
  if(input_strings.size() == 0)return -1;
  int max = sumofAscii(input_strings[0]);
  int max_i = 0;
  for(int i = 0; i < input_strings.size(); i++){
    //cout << input_strings[i] << " sum: " << sumofAscii(input_strings[i]) << endl;
    if(max < sumofAscii(input_strings[i])){
      max = sumofAscii(input_strings[i]);
      max_i = i;
    }
  }
  return max_i;
}

int main(){
  vector<string> v;
  
  v.push_back("polar");
  //v.push_back("suspension");
  //v.push_back("pepermint");
  v.push_back("mocha");
  v.push_back("apple ");
  
  //cout << "sum: " << sumofAscii("bob") << endl;
  //cout << "sum: " << sumofAscii("mocha") << endl;
  //return 0;
  
  //cout << maxASCIIStringPosition(v) << endl;
  
  cout << v[maxASCIIStringPosition(v)] << endl;

}

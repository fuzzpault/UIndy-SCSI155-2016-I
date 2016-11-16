/* Name: Paul Talaga
   Date: 11/15/16
   Desc: Solution to maxASCIIStringPosition funciton in practice Exam 2.
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int sumofAscii(string word){
  int sum = 0;
  for(int i = 0; i < word.size(); i++){
    sum = sum + word[i];
  }
  return sum;
}

int maxASCIIStringPosition(vector<string> input_strings){
  if(input_strings.size() == 0){
    return -1;
  }
  int max_so_far = sumofAscii(input_strings[0]);
  int max_loc = 0;
  for(int i = 1; i < input_strings.size(); i++){
    if(max_so_far < sumofAscii(input_strings[i])){
      max_so_far = sumofAscii(input_strings[i]);
      max_loc = i;
    }
  }
  return max_loc;
}

int main(){
  vector<string> v;
  v.push_back("bob");
  v.push_back("pepermint mocha ");
  v.push_back("pepermint mochb");
  
  //cout << sumofAscii("bob") << endl;
  //cout << sumofAscii("obb") << endl;
  cout << maxASCIIStringPosition(v) << endl;
  
  cout << v[ maxASCIIStringPosition(v) ] << endl;
}

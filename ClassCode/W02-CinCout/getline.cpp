/* Name: Paul Talaga
   Date: 9/9/16
   Desc: cin >> vs getline.
      Try entering a sentence at the prompt.
*/

#include <iostream>
#include <string>


using namespace std;



int main(){
  cout << "What is your favorite food?" << endl;
  string food;
  getline(cin, food);
  //cin >> food;
  cout << "Cool, I like " << food << " as well!";
  
  
  return 0;
}



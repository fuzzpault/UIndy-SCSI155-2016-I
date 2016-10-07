/* Name: Paul Talaga
   Date: 10/7/16
   Desc:Example of default parameters.
        Note that default parameters MUST come AFTER 
        non-default parameters.
*/
#include <iostream>
#include <string>

using namespace std;

string iLike(string food = "vegetables",string meal = "lunch"){
  return "I like " + food + " a lot for " + meal + ".";
}


int main(){
  cout << iLike("pancakes", "dinner") << endl;
  cout << iLike("grapes") << endl;
  cout << iLike() << endl;
}
/* Name: Paul Talaga
   Date: 9/13/16
   Desc: Conditionals and boolean expressions, w/ ranges
*/
#include <iostream>

using namespace std;

int main(){
    int answer = 0;
    cout << "How many coffees did you have?\n";
    cin >> answer;
    if(answer == 0){
      //if(!answer){
      cout << "No? you need some!\n";
    }
    if(answer < 0){
      cout << "Negative coffee? are you still asleep?\n";
    }
    if((0 < answer) && (answer <= 2)){
      cout << "maybe you should have another.\n";
      
    }
    if(answer > 2){
      cout << "You probably have a problem.... ;-)";
    }
 
 return 0;  
}

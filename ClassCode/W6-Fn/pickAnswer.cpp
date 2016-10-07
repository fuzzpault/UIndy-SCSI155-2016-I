/* Name: Paul Talaga
   Date: 10/6/16
   Desc: Using a function to pick A,B,C,D with specific probabilites.
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// This will pick 'C' 50% of the time, and the rest equally.
char pickAnswer(){
     int r = rand() % 100;
     if(r <= 16){
       return 'A';
     }else if(r <= 32){
       return 'B';
     }else if(r <= 50){
       return 'D';
     }else{
       return 'C';
     }
     cout << "Why not here?" << endl;
}


int main(){
    srand(time(0));
    int acount = 0;
    int bcount = 0;
    int ccount = 0;
    int dcount = 0;
    for(int i = 0; i < 400; i++){
      int ans = pickAnswer();
      if(ans == 'A')acount++;
      if(ans == 'B')bcount++;
      if(ans == 'C')ccount++;
      if(ans == 'D')dcount++;
      //char c;
      //cin >> c;
    }
    
    cout << "A count: " << acount << endl;
    cout << "B count: " << bcount << endl;
    cout << "C count: " << ccount << endl;
    cout << "D count: " << dcount << endl;
    
    return 0;
}



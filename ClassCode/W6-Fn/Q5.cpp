/*  Quiz 5
    You may ONLY fill in the function bodies!
*/

#include <iostream>
#include <string>

using namespace std;

int add(int a, int b){
  // TODO: Change me
  return 0;
}

int mult(int a, int b){
  // TODO: Change me
  return 0;
}

void doSomething(int a){
  // TODO: Change me
}

void doSomethingElse(int& a){
  // TODO: Change me
}

void printRange(int a, int b){
  // TODO: Change me
}

int main(){
    // Do NOT change anything below.  You may only change the functions above!
    cout << "Fix my outputs!" << endl;
    cout << "1 + 1 = " << add(1,1) << endl;
    cout << "6 * 9 = " << mult(6,9) << endl;
    cout << "6 * (9 + 1) = " << mult(6, add(9,1)) << endl;
    
    int a = 5;
    cout << "a=5 a=" << a << endl;
    cout << "6 = ";
    doSomething(a);
    cout << endl;
    
    cout << "a=5 a=" << a << endl;
    doSomethingElse(a);
    cout << "a=10 a=" << a << endl;
    
    cout << "[1 2 3 4 5] = ";
    printRange(1,5);
    cout << endl;
    
    cout << "[56 57 58] = ";
    printRange(56,58);
    cout << endl;
    
    return 0;
}

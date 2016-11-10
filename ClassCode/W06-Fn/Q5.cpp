/*  Quiz 5
    You may ONLY fill in the function bodies!
*/

#include <iostream>
#include <string>

using namespace std;

int add(int a, int b){
  return a + b;
}

int mult(int a, int b){
  return a * b;
}

void doSomething(int a){
  cout << a + 1;
}

void doSomethingElse(int& a){
  a = 10;
}

void printRange(int a, int b){
  cout << "[";
  for(int i = a; i <=b; i++){
    cout << i << " ";
  }
  cout << "]";
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

#include <iostream>
#include <fstream>

using namespace std;

int main(){

    for(int i = 0; i < 10; i++){
      cout << "i: " << i << endl;
      continue;
      cout << "End of j loop" << endl;
    }
    cout << "The loop ended" << endl;
    
    return 0;
}

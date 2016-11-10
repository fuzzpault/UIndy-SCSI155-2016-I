#include <iostream>
#include <fstream>

using namespace std;

int main(){

    for(int i = 0; i < 10; i++){
      for(int j = 0; j < 10; j++){
        cout << "i: " << i << " j: " << j << endl;
        if(j == 7){
          break;
        }
      }
      cout << "End of j loop" << endl;
    }
    cout << "The loop ended" << endl;
    
    return 0;
}

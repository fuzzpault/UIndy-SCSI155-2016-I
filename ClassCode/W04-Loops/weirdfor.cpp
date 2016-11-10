#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(){
    int count = 0;
    for(int i = 0; count < 10 ; i = rand()%10){
      cout << i << endl;
      count++;
    }
    return 0;
}

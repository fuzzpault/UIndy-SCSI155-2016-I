#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream seven;
    seven.open("stuff3.txt");
    string word = "bob";
    for(int i = 0; i < 7; i++){
      seven << "Catastophy\n";
    }
    seven.close();
}

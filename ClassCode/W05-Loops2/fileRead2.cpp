#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream a;
    a.open("stuff.txt");
    string word;
    
    int loop_count = 0;
    
    while(! a.eof()){
      a >> word;
      if( a.eof()){
        break;
      }
      loop_count++;
      cout << word << endl;
    }
    cout << "There were " << loop_count << " words in the file." << endl;
    a.close();
    
    
    return 0;
}

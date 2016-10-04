#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream a;
    a.open("stuff.txt");
    string word = "bob";
    int word_count = 0;
    while(! a.eof()){
            a >> word;
            if(a.eof()){
              break;
            }
            cout << word;
            cout << "  " << word.length() << endl;
            cout << endl;
            word_count++;
    }
    
    cout << "Word Count: " << word_count << endl;
    a.close();
}

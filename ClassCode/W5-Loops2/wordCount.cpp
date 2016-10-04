#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream a;
    a.open("mobydick.txt");
    string word;
    
    int loop_count = 0;
    int the_count = 0;
    int a_count = 0;
    
    while(! a.eof()){
      a >> word;
      if( a.eof()){
        break;
      }
      loop_count++;
      /*if(loop_count < 100){
        cout << word << " ";
      }else{
        break;
      }*/
      //cout << word << ' ';
      if(word == "the"){
        the_count++;
      }
      if(word[0] == 'a'){
        a_count++;
        cout << word << " ";
      }
    }
    cout << "There were " << loop_count << " words in the file." << endl;
    cout << "There were " << the_count << " the's in the file." << endl;
    cout << "There were " << a_count << " a words in the file." << endl;
    a.close();
    
    
    return 0;
}

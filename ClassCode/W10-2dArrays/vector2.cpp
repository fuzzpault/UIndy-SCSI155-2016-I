/* Name: Paul Talaga
   Date: 11/3/16
   Desc: Demo of using a vector.  push_back can be used to add elements onto
         the end of the vector(array).  Since it is an object, it knows its size!
         Vector has other constructors; ways of creating itself, which 
         can fill in elements.  These methods will not be tested.
*/
#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> a){
  for(int i = 0; i < a.size(); i++){
    cout << i << ":" << a[i] << endl;
  }
}

int main(){
  vector<int> a(10,5);  // Fills a with 10 5's.
  
  a.erase(a.begin());  // Elements can be removed from vectors.  This removes
                       // the first element.  You don't need to know this.
  
  cout << "size: " << a.size() << endl;
    
  a.push_back(5);
  a.push_back(50);
  cout << "size: " << a.size() << endl;
  a[0] = 99;
  print(a);
  
  return 0;
}

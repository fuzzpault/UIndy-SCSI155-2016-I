/* Name: Paul Talaga
   Date: 11/20/16
   Desc: Exam 2 - First code tracing
*/
#include <iostream>
#include <vector>
using namespace std;


int main(){
     int array[10] = {1,3,4,7,9,11,13,15,17,19};
     cout << array[1] << ", " << array[array[1]]
             	        << ", " << array[array[array[1]]] << endl;
     
}

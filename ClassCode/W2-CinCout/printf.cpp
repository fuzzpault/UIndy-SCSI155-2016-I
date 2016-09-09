/* Name: Paul Talaga
   Date: 9/9/16
   Desc: Demo of printf, the C way to do output formatting.
         printf is by far more common for output formatting than cout/setprecision/etc
         http://en.cppreference.com/w/cpp/io/c/fprintf
*/
#include <iostream>

using namespace std;

int main(){
    float amt = 3.14159;
    int a = 17;
    printf("Bob %0.2f",amt, a);
    
    return 0; 
}

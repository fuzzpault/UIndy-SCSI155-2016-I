#include <iostream>

using namespace std;

int main(){
 string character;
 cout << "Enter y/n:" << endl;
 cin >> character;
 switch(character){
   case "1":
   case "Y":
   case "y":
     cout << "You said yes" << endl;
     break;
   case "0":
   case "N":
   case "n":
     cout << "You said no" << endl;
     break;
   default:
     cout << "That was not a valid answer" << endl;
 }
 
 
 if(character == 'y' || character == 'Y' || character == '1'){
   cout << "if you said yes" << endl;
 }else if(character == 'n' || character == 'N' || character == '0' ){
   cout << "if you said no" << endl;
 }else{
   cout << "if Default" << endl;
 }
 
 
 return 0;
}

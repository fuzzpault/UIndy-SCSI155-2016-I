/*
Name: <fill me in>
Date: <fill me in>
Assignment: <fill me in>
Description: <fill me in>
*/
#include <iostream>

using namespace std;

/* Fill in 4 functions with proper inputs and return types */

void multiply(int nt, int nb, int mt, int mb){
  cout << nt * mt << "/" << nb * mb;
}

void add(int nt, int nb, int mt, int mb){
  if(nb == mb){
    cout << nt + mt << "/" << mb;
  }else{
    int denom = nb * mb;
    cout << nt * mb + mt * nb << "/" << denom;
  }
}

int enough(int goal){
  int sum = 0;
  int i = 0;
  while(sum <= goal){
    sum = sum + i;
    if(sum > goal){
      return i - 1;
    }
    i++;
  }
}


int sum_from_to(int start, int end){
  if(start > end){
    int temp = start;
    start = end;
    end = temp;
  }
  int sum = 0;
  for(int i = start; i <=end; i++){
    sum += i;
  }
  return sum;
}

int main(){
  // Your goal is to fill in function above to make this file compile
  // and match the expected output.
  cout << "Multiply:" << endl;
  cout << "1/2 = ";
  multiply(1,1,1,2);
  cout << endl << "1/8 = ";
  multiply(1,4,1,2);
  cout << endl << "2/9 = ";
  multiply(-1,9,-2,1);
  
  cout << endl << endl << "Add:" << endl;
  cout << "2/4 = ";
  add(1,4,1,4);
  cout << endl << "2/8 = ";
  add(1,2,-1,4);
  
  cout << endl << endl << "Enough:" << endl;
  cout << "3 = " << enough(9) << endl;
  cout << "3 = " << enough(8) << endl;
  cout << "5 = " << enough(17) << endl;
  cout << "6 = " << enough(21) << endl;
  cout << "0 = " << enough(-5) << endl;
  cout << "19 = " << enough(4) + enough(23) + enough(77) << endl;
  
  cout << endl << "Sum from to:" << endl;
  cout << "15 = " << sum_from_to(0,5) << endl;
  cout << "15 = " << sum_from_to(5,0) << endl;
  cout << "11 = " << sum_from_to(5,6) << endl;
  cout << "81 = " << sum_from_to(0,3) + sum_from_to(10,15) << endl;
  cout << "-15 = " << sum_from_to(4,-15) - sum_from_to(-14,4) << endl;
  
  return 0;
}

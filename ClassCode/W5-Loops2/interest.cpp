#include <iostream>

using namespace std;

int main(){
    float init = 0;
    int years = 0;
    float year_cont = 0;
    float rate = 0.0;
    float goal = 0.0;
    cout << "What is your investment goal?" << endl;
    cin >> goal;
    cout << "How much money do you want to invest initially: " << endl; 
    cin >> init;
    cout << "How long to invest for?(years)" << endl;
    cin >> years;
    cout << "How much invested per year?" << endl;
    cin >> year_cont;
    cout << "Interest rate in percent?" << endl;
    cin >> rate;
    float total = init;
    for(int i = 1; i <= years; i++){
      total = (total + year_cont) * (1 + rate/100);  
      cout << "Money after " << i << " years: " << total << " you made: ";
      cout << total - (init + year_cont * i) << endl;
      if(total > goal){
        cout << "Total money invested: $" << init + year_cont * years << endl;
        cout << "You didn't need " << years << " to invest!" << endl;
        cout << "It took you " << i << " years to make " << goal;
        return 0;
      }
    }
    cout << endl;
    cout << "Total money invested: $" << init + year_cont * years << endl;
    cout << "You need an additional $" << goal - total << " for your goal." << endl;
    
    
    
}   

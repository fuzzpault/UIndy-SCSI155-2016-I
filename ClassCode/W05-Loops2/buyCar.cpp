#include <iostream>

using namespace std;

// starting investment amount
// yearly interest rate
// yearly contribution
// Dollar amount for my car.
// How long until I can buy it.

int main(){

  cout << "Starting amount: " << endl;
  float starting_amt = 0.0;
  cin >> starting_amt;
  cout << "Interest rate: " << endl;
  float rate = 0.0; // APR/APY        3 %
  cin >> rate;
  cout << "Yearly contribution: " << endl;
  float yearly_contribution = 0.0;
  cin >> yearly_contribution;
  cout << "Car amount: " << endl;
  float car_amt = 0.0;
  cin >> car_amt;

  float balance = starting_amt;
  int year = 1;
  
  while(balance < car_amt){ // Keep investing
    balance = (balance + yearly_contribution) * (1 + rate / 100.0);
    cout << "year: " << year << " balance: " << balance;
    cout << " interest: " << balance - (starting_amt + yearly_contribution * year) << endl;
    year++;
  }

  
  return 0;
}

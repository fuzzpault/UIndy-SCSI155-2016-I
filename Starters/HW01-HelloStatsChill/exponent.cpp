// Assignment: --
// Name: Paul Talaga
// Email: talagap@uindy.edu
// Date: 8/31/2016
// Description: Exponent demo

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float base = 0.0;
	float exponent = 0.0;

	cout << "base: ";
	cin >> base;
	
	cout << "exponent: ";
	cin >> exponent;
	
	cout << base << "^" << exponent << " = ";
	cout << pow(base,exponent);
	return 0;
}

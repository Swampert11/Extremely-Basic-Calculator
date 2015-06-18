/* 
Do not divide by 0!
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	int b;
	int c;
	int sign;
	int sum;
	int difference;
	int product;
	int dividend;
	cout << "add, subtract, multiply, or divide? To add, press 1. To subtract, press 2. To multiply, press 3. To divide, press 4." << endl;
	cin >> sign;
	cout << "Enter a number now" << endl;
	cin >> a;
	cout << "Enter the second number" << endl;
	cin >> b;
	sum = a + b;
	difference = a - b;
	product = a * b;
	
	if (sign == 1) {
		cout << "The answer is " << sum << endl;
	}
	else if (sign == 2) {
		cout << "The answer is " << difference << endl;
	}
	else if (sign == 3) {
		cout << "The answer is " << product << endl;
	}
	else if (sign == 4) {
		dividend = a / b;
		cout << "The answer is " << dividend << endl;
	}
	cout << "Press a key and then press Enter to exit" << endl;
	cin >> c;
	return 0;
}

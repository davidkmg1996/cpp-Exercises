#include <iostream>

using namespace std;


int main() {
	
	int num1 = 0;
	int num2 = 0;

	cout << "Please enter a number" << endl;
	std::cin >> num1;
	cout << "Please enter a second number" << endl;
	std::cin >> num2;

	if (num1 > num2 ) {
		cout << num1 << " is greater than " << num2 << endl;

	if (num2 > num1) {
		cout << num2 << " is greater than " << num1 << endl;
	}

	if (num1 == num2) {

		cout << num1 << " equals " << num2<< endl;
	}


	return 0;
}
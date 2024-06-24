#include <iostream>

using namespace std;

/*
* Textbook exercises chapter 2
*/

int main() {

	//2.17
	
	//a
	cout << "1 2 3 4\n" << endl;
	
	//b
	cout << "1 " << "2 " << "3 " << "4\n" << endl;

	//c
	cout << "1 ";
	cout << "2 ";
	cout << "3 ";
	cout << "4\n";


	2.18

	int num1 = 0;
	int num2 = 0;

	cout << "Please enter a number\n";
	cin >> num1;
	cout << "Please enter a second number\n";
	cin >> num2;


	if (num1 > num2) {

		cout << num1 << " is greater than " << num2 << endl;
	}

	if (num2 > num1) {
			cout << num2 << " is greater than " << num1 << endl;
		}

	if (num1 == num2) {

			cout << num1 << " equals " << num2 << endl;
		}






	return 0;
}
#include <iostream>

using namespace std;

/*
* Textbook exercises chapter 2
* davidkmg1996
*/

int main() {

	int twoSeventeen();
	int twoEighteen();
	int circle();

	//2.17
	twoSeventeen();
	//2.18
	twoEighteen();
	//2.20
	circle();

	return 0;
}

int twoSeventeen() {


	//a
	cout << "1 2 3 4\n" << endl;

	//b
	cout << "1 " << "2 " << "3 " << "4\n" << endl;

	//c
	cout << "1 ";
	cout << "2 ";
	cout << "3 ";
	cout << "4\n\n";

	return 0;
}

int twoEighteen() {


	//2.18
	int num1 = 0;
	int num2 = 0;

	cout << "Please enter a number\n";
	cin >> num1;
	cout << "Please enter a second number\n";
	cin >> num2;
	cout << "\n";


	if (num1 > num2) {

		cout << num1 << " is greater than " << num2 << "\n" << endl;
	}

	if (num2 > num1) {
		cout << num2 << " is greater than " << num1 << "\n" << endl;
	}

	if (num1 == num2) {

		cout << num1 << " equals " << num2 << "\n" << endl;
	}

	return 0;
}

int circle() {
	
	int pi = 3.14169;
	int radius = 0;
	int circumference = 0;
	int area = 0;

	cout << "Please enter the radius of a circle" << endl;
	cin >> radius;

	circumference = 2 * pi * radius;
	area = pi * (radius * radius);

	cout << "The radius of the circle is " << radius << "\n";
	cout << "The circumference of the circle is " << circumference << "\n";
	cout << "The area of the circle is " << area << "\n";

	return 0;
}
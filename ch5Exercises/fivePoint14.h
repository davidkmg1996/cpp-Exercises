#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//5.14

class fiveFourteen {

    public:
        double principal{1000.00};

        void calculate(double rate){

            cout << fixed << setprecision(2);
            cout << "\nYear" << setw(20) <<"Amount on deposit" << endl;


            for (unsigned int year{1}; year <= 10; year++) {
                double amount = principal * pow(1.0 + rate, year);

                cout << setw(4) << year << setw(20) << amount << endl;
            }
        }

        void calc() {


            for (double i = 0.05; i <= .10; i+= .01) {
                cout << "\n";
                cout << "Initial Principal: " << principal << endl;
                cout << "interest Rate " << i << endl;
                calculate(i);
            }

            for (double i = 0.05; i <= 1.0; i++) {
                cout << i << endl;
            }
        }


};
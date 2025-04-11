#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

//5.29
class fiveTwentyNine {


    public:
    double principal{24.00};

    void peterMinuit(double rate){

        cout << fixed << setprecision(2);
        cout << "\nYear" << setw(20) <<"                Amount on deposit" << endl;


        for (unsigned int year{1}; year <= 390; year++) {
            double amount = principal * pow(1.0 + rate, year);
            cout << setw(4) << year << "       " << setw(20) << amount << endl;
        }
    }

    void calc() {
            for (double i = .05; i <= .10; i+= .05) {
            cout << "\n";
            cout << "Initial Principal: " << principal << endl;
            cout << "interest Rate " << i << endl;
            peterMinuit(i);
            
            }
             
    }




};
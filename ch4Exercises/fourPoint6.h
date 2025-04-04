#pragma once
#include <iostream>

using namespace std;

//4.6

class fourSix{

    public:
        unsigned int x = 5;
        unsigned int product = 5;
        unsigned int quotient = 5;

        void calculate() {

            product *= x++;

            cout << product << endl;

            quotient /= ++x;

            cout << quotient << endl;
        }

};






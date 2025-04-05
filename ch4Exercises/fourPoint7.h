#pragma once
#include <iostream>
#include <string>


using namespace std;

//4.7

class fourSeven{

    public:
        unsigned int x;
    
        unsigned int y;
        //c
        unsigned int i = 1;
        //d
        unsigned int power = 1;

        void fourP7() {
            //a
            cin >> x;
            //b
            cin >> y;
            //e
            power = power * x;
            //f
            ++i;
            //g
            if (i <= y) {
                cout << "True" << endl;
            } else {
                cout << "False" << endl;
            }
            //h
            cout << "Value of power is: " << power << endl;


        }

};
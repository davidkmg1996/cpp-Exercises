#include <iostream>
#include <string>


using namespace std;


class fiveTwentyTwo {

    public:
        int x, y, a, b, g, j, i;
        bool bleh;

        //5.22
        void DeMorgan() {

            //a

            x = 6;
            y = 6;

            if (!(x < 5) && !(y >= 7)) {
                bleh = true;
                cout << "\n" << boolalpha << bleh << "\n";
            } else {
                bleh = false;
            }

            if ((x >= 5) && (y < 7)) {
                bleh = true;
                cout << "\n" << boolalpha << bleh << "\n";
            } else {
                bleh = false;
            }

            a = 1;
            b = 2;
            g = 5;

            //b
            if (!(a == b) || !(g != 5)) {
                bleh = true;
                cout << "\n" << boolalpha << bleh << "\n";
            } else {
                bleh = false;
            }

            if (!(a == b && g != 5)) {
                bleh = true;
                cout << "\n" << boolalpha << bleh << "\n";
            } else {
                bleh = false;
            }

            x = 9;
            y = 3;

            //c
            if (!((x <= 8) && (y > 4))) {
                bleh = true;
                cout << "\n" << boolalpha << bleh << "\n";
            } else {
                bleh = false;
            }

            if (x > 8 || y <= 4) {
                bleh = true;
                cout << "\n" << boolalpha << bleh << "\n";
            } else {
                bleh = false;
            }
            
            //d
            i = 3;
            j = 7;

            if (!((i > 4 ) || (j <= 6))) {
                bleh = true;
                cout << "\n" << boolalpha << bleh << "\n";
            } else {
                bleh = false;
            }

            if ((i <= 4) && (j > 6)) {
                bleh = true;
                cout << "\n" << boolalpha << bleh << "\n";
            } else {
                bleh = false;
            }

        }


};
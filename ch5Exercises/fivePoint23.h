#include <iostream>
#include <string>


using namespace std;


class fiveTwentyThree {

public:

    void diamond() {
    int counter = 0;
    int nine = 9;
    int die;

        for (int i = 0; i <= nine; i++) {
            die = (nine - i) / 2;
            if (i % 2 != 0) {
                for (int j = 0; j < die; j++) {
                    cout << " ";
                }
                for (int counter = 1; counter <= i; counter++) {
                    cout << "*";
                }
                cout << " ";
            }
            cout << " ";
            cout <<"\n";
        }

        for (int i = 8; i >= 1; i--) {
            die = (nine - i) / 2;
            if (i % 2 != 0) {
                for (int j = 0; j < die; j++) {
                    cout << " ";
                }
                for (int counter = 1; counter <= i; counter++) {
                    cout << "*";
                }
            }
            cout << "\n";

        }

        cout << "\n\n";
    }


};
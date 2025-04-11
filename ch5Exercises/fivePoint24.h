#include <iostream>
#include <string>

using namespace std;

class fiveTwentyFour {

public:

    //5.24
    void diamondEnter() {
        int counter = 0;
        int die;
        int rows;

        cout << "Enter a number of rows: ";
        cin >> rows;
    
            for (int i = 0; i <= rows; i++) {
                die = (rows - i) / 2;
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
    
            for (int i = rows - 1; i >= 1; i--) {
                die = (rows - i) / 2;
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
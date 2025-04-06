#include <iostream>
#include <string>

using namespace std;


class fiveSixteen {

    public:
        int i[4];

        void display() {

            cout << "\n";

            for (int k = 0; k <= 4; k++) {
                cout << "Enter integer " << k + 1 << ": ";
                cin >> i[k];

                if (i[k] < 1 || i[k] > 30) {
                    err();
                }
            }

            cout << "\n";

            for (int l = 0; l <= 4; l++) {
                cout << i[l] << endl;
            }

            cout << "\n";

            for (int m = 0; m <= 4; m++) {
                for (int n = 0; n <= i[m] - 1; n++) {
                    cout << "*";
                }
                cout << "\n";

            }
        }

        void err(){
            cout << "Please only enter values between one and 30." << endl;
            display();
        }


};
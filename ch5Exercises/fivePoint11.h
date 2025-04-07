#include <iostream>
#include <string>


using namespace std;


class fiveEleven {

    //5.11

    public:
        unsigned int i;
        unsigned int p;

    
        void findSmallest() {

            cout << "Please enter a number of integers to process: ";
            cin >> i;

            int x[i];

            if (i < 1) {
                cout << "Please enter a value greater than zero\n";
                findSmallest();
            }

            if (i == -1) {
                return;
            }
            

            for (int k = 1; k <= i; k++) {
                cin >> x[k];
            }

            p = x[0];

            for (int m = 1; m < i; m++) {
                if (x[m] < p) {
                    p = x[m];
                }
            }

            cout << "\n" << p << "\n" << endl;
           
        }

};
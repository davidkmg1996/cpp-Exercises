#include <iostream>
#include <string>

using namespace std;


class fiveNineteen {


public:
    int counter = 0;
    double four = 4.0;
    int numTerms = 0;

    //5.19

    void calculatePi(){

        for (int i = 3; i <= 400000; i+=2) {
            counter++;

            if (counter % 2 != 0) {
                four -= (4.0/i);
            } else {
                four += (4.0/i);
            }

            cout << setprecision(5) << four << "\n" << endl;
            numTerms++;

        }

        cout <<  "\n" << numTerms;
    }

    


};
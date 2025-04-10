#include <iostream>
#include <string>
#include <cmath>

using namespace std;


//5.20
class fiveTwenty {


    public:
        unsigned int side1;
        unsigned int side2;
        int counter;

        void triples(){

            for (int i = 5; i <= 499; i++) {
                for (side1 = 4; side1 <= i; side1 ++) {
                    for (side2 = 3; side2 <= side1; side2++) {
                        if (pow(side1,2) + pow(side2, 2) == pow(i, 2)) {
                            cout << side2 << ", " << side1 << ", " << i << endl;

                        }
                    }
                }
            }

    





        }




};
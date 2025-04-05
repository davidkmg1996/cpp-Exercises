#include <iostream>
#include <string>

using namespace std;


//5.12
class fiveTwelve {

    public:
        unsigned int j = 1;
        
        int calculateOdds() {

            for (int x = 1; x <= 15; x++) {
                if ((x % 2) != 0) {
                    j *= x;
                    cout << j << endl;
                }
        
            }

            return 0;
        }
};
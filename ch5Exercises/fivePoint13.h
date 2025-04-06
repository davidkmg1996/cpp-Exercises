#include <iostream>
#include <string>
#include <array>


using namespace std;


class fiveThirteen {

    //5.13

    public:
        long x[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
        int i{0};
        long l{1};

        long calculateFactorial(int f){

            for (i = f; i >= 0; x[i--]) {
                if (f > 19) {
                    cout << "Only enter an integer value between 0 and 19" << endl;
                    break;
                } else {
                    l *= x[i];
                    break;
                }
            }

            return l;
        
            

        }
    

    
};
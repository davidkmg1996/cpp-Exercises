#include <iostream>
#include <string>


using namespace std;

class fiveTwentyOne {

    public:
        int rows = 10;

        //5.21
        void triangle() {

        //a
        cout << "\n";
        for (int j{0}; j < rows; ++j) {
            //a
            for (int i{0}; i <= j; i++) {
                cout << "*";
            }

            cout << " ";
            //b
            for (int i{9}; i >= j; i--) {
                cout << left << "*";
            }

            cout << " ";
            //c
            for (int i{0}; i < j; ++i) {
                cout << " ";
            }

            for (int i{9}; i >= j; i--) {
                cout << "*";
            }

            cout << " ";
            //d
            for (int i{9}; i >= j; --i) {
                cout << " ";
            }

            for (int i{0}; i<= j; i++) {
                cout << "*";
            }
            
            cout <<"\n";
        }
        
        cout <<"\n";

        //b
        // for (int j{0}; j < rows; ++j) {
            
           
        //     cout <<"\n";
        // }

    

        //d
     
       
    }


};

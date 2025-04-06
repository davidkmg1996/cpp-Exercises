#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


//5.15

class fiveFifteen {

public:
    int rows = 10;
    void triangle() {

        //a
        cout << "\n";
        for (int j{0}; j < rows; ++j) {

            for (int i{0}; i <= j; i++) {
                cout << "*";
            }
            cout <<"\n";
        }
        
        cout <<"\n";

        //b
        for (int j{0}; j < rows; ++j) {
            
            for (int i{9}; i >= j; i--) {
                cout << "*";
            }
            cout <<"\n";
        }

        cout <<"\n";


        //c   
        for (int j{0}; j < rows; ++j) {

            for (int i{0}; i < j; ++i) {
                cout << " ";
            }

            for (int i{9}; i >= j; i--) {
                cout << "*";
            }
            cout << "\n";
        }

        cout << "\n";

        //d
        for (int j{0}; j < rows; ++j) {
            for (int i{9}; i >= j; --i) {
                cout << " ";
            }

            for (int i{0}; i<= j; i++) {
                cout << "*";
            }

            cout << "\n";
 
        } 
        
        
       
    }

   

};
#include <iostream>
#include <string>
#include "fivePoint11.h"
#include "fivePoint12.h"
#include "finvePoint13.h"

using namespace std;



int main() {

    //5.12
    fiveTwelve f12;
    f12.calculateOdds();

    fiveThirteen f13;

    //5.13
    cout << "\n";
    cout << "FACTORIALS" << endl;
    cout << "\n"<<"Input        Factorial\n";
    cout << "----------------------" << endl;

    for (int i = 0; i <= 8; i++) {
        cout << i + 1 << "!       |      " << f13.calculateFactorial(i) << endl;
    }

    for (int i = 9; i <= 19; i++) {
        cout << i + 1 << "!      |      " << f13.calculateFactorial(i) << endl;
    }

}
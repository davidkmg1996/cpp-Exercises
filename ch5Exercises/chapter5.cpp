#include <iostream>
#include <string>
#include "fivePoint11.h"
#include "fivePoint12.h"
#include "fivePoint13.h"
#include "fivePoint14.h"
#include "fivePoint15.h"
#include "fivePoint16.h"
#include "fivePoint17.h"

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

    fiveFourteen f14;

    //5.14
    f14.calc();

    fiveFifteen f15;

    f15.triangle();
    
    fiveSixteen f16;
    f16.display();

    fiveSeventeen f17;
    f17.displayPrice();

}
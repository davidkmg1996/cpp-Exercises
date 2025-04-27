#include <iostream>
#include <string>
#include "fivePoint11.h"
#include "fivePoint12.h"
#include "fivePoint13.h"
#include "fivePoint14.h"
#include "fivePoint15.h"
#include "fivePoint16.h"
#include "fivePoint17.h"
#include "fivePoint19.h"
#include "fivePoint20.h"
#include "fivePoint21.h"
#include "fivePoint22.h"
#include "fivePoint23.h"
#include "fivePoint24.h"
#include "fivePoint28.h"
#include "fivePoint29.h"
#include "fivePoint30.h"

using namespace std;



int main() {

    //5.11
    fiveEleven f11;
    f11.findSmallest();

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

    //5.15
    fiveFifteen f15;
    f15.triangle();
    
    //5.16
    fiveSixteen f16;
    f16.display();

    //5.17
    fiveSeventeen f17;
    f17.displayPrice();

    //5.19
    fiveNineteen f19;
    f19.calculatePi();

    //5.20
    fiveTwenty f20;
    f20.triples();

    //5.21
    fiveTwentyOne f21;
    f21.triangle();

    //5.22
    fiveTwentyTwo f22;
    f22.DeMorgan();

    //5.23
    fiveTwentyThree f23;
    f23.diamond();

    //5.23
    fiveTwentyFour f24;
    f24.diamondEnter();

    //5.28
    fiveTwentyEight f28;
    f28.twelveDays();

    //5.29
    fiveTwentyNine f29;
    f29.calc();

    //5.30
    fiveThirty f30(1000, 239);
    fiveThirty fAdd(0, 20);
    fiveThirty fSub(500, 0);
    f30.toString();
    f30.add(fAdd);
    f30.toString();
    f30.subtract(fSub);
    f30.toString();


 }
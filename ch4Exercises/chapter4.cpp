//
// Created by David Markowski-Goldwyn on 4/4/25.
//

//Skipping some of chapter 3 for a while, having comp issues on macOS

#include <iostream>
#include <string>

using namespace std;

int main() {


 //4.2
    int x = 0;
    x = x + 1;
    cout << x << endl;
    x = 0;

    x = 1 + x;

    cout << x << endl;;

    x = 0;

    x = ++x;

    cout << x << endl;

    x = 0;

    x += 1;

    cout << x << endl;

    x = 0;

    //4.3
   
    //a
    x = 5;
    int y = 1;
    int z = 2;

    z = y + x++;
    cout << z << endl;

    //b

    int count = 10;

    if (count > 10) {
      cout <<"Count is greater than 10" << endl;
    } else {
      cout <<"Count is less than or equal to 10" << endl;
    }

   //c

   int total = 15;
   --x;

   total = total - x;

   cout << total << endl;
   
   //d

   int q = 10;
   int divisor = 6;
   int remainder;

   remainder = q / divisor;
   cout << remainder << endl;

   float qWNC = 10;
   float divisorWNC = 6;
   float remainderWNC;

   remainderWNC = qWNC / divisorWNC;

   cout << remainderWNC << endl;

   //4.4

   //a
   unsigned int sum = 0;

   //b
   unsigned int x44= 1;

   //c
   sum = x44 + sum;

   //d
   cout << "The sum is: " << sum << " " << endl;



 }



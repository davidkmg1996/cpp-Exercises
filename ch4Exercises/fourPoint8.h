#pragma once
#include <iostream>
#include <string>


using namespace std;

//4.8

class fourEight{

    public:
        unsigned int x;
    
        unsigned int y;
        
        unsigned int i = 1;
        
        unsigned int power = 1;

        void fourP8() {
            
            cin >> x;
            
            cin >> y;
            
            ++i;

            i = 1;
            
            
            while (i <= y) {
                i++;
                power = power * x;

                cout << power << endl;

            }

        }

};
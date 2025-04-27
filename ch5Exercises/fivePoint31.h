#include <string>
#include <iostream>
#include <cmath>

using namespace std;

//5.31
class fiveThirtyOne {

    public:
        
        explicit fiveThirtyOne(int64_t dollars, int64_t cents) : amount{(dollars * 100) + (cents)} {

        }

        void add(fiveThirtyOne right) {
            amount += right.amount;
        }

        void subtract(fiveThirtyOne right) {
            amount -= right.amount;
        }

        void divide(int blockquote) {

            amount = (amount / blockquote);

           
        }

        void addInterest(int rate, int divisor) {

            fiveThirtyOne interest{
                (amount * rate + divisor / 2) / divisor,
                0
            };

            add(interest);
        }

        string toString() const {

            return to_string(amount);
        }


    private:
        int64_t amount{0};

};
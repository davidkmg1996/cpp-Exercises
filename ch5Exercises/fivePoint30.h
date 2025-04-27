#include <string>
#include <cmath>

using namespace std;

//5.30
class fiveThirty {

    public:
        
        explicit fiveThirty(int64_t dollars, int64_t cents) : amount{(dollars * 100) + (cents)} {

        }

        void add(fiveThirty right) {
            amount += right.amount;
        }

        void subtract(fiveThirty right) {
            amount -= right.amount;
        }

        void addInterest(int rate, int divisor) {

            fiveThirty interest{
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
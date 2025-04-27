#include <string>
#include <cmath>

using namespace std;

//5.30
class fiveThirty {

    public:
        
        explicit fiveThirty(int64_t dollars, long long cents) : amount{(dollars * 100) + (cents)} {

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
        

            cout << amount << endl;
            return to_string(amount);
        }


    private:
        int64_t amount{0};
        int64_t dollars{0};
        int64_t cennts{0};

};
#include <iostream>
#include <string>

using namespace std;


class fiveSeventeen {

    //5.17

    public:
        double price = 0;
        int pNumber = 0;
        int quantitySold = 0;
        int totalQuantity = 0;


        void displayPrice() {
            
            
            do {
            if (pNumber != -1 && (pNumber > 0 || pNumber < 6)) {
                cout << "Enter a product number between 1 and 5 followed\nby the quantity sold. Enter -1 or a product number\noutside of this range to exit the program" << endl;
                cin >> pNumber;
                switch(pNumber){
                    case 1:
                        cin >> quantitySold;
                        if (quantitySold == -1) {
                            return;
                        }
                        totalQuantity += quantitySold;
                        price += 2.98 * quantitySold;
                        cout << "\nTotal Price So Far: $" << price << endl;
                        cout << "Quanity Sold: " << totalQuantity << "\n\n";
                        break;
                    case 2:
                        cin >> quantitySold;
                        if (quantitySold == -1) {
                            return;
                        }
                        totalQuantity += quantitySold;
                        price += 4.50 * quantitySold;
                        cout << "\nTotal Price So Far: $" << price << endl;
                        cout << "Quanity Sold: " << totalQuantity << "\n\n";
                        break;
                    case 3:
                        cin >> quantitySold;
                        if (quantitySold == -1) {
                            return;
                        }
                        totalQuantity += quantitySold;
                        price += 9.98 * quantitySold;
                        cout << "\nTotal Price So Far: $" << price << endl;
                        cout << "Quanity Sold: " << totalQuantity << "\n\n";
                        break;
                    case 4:
                        cin >> quantitySold;
                        if (quantitySold == -1) {
                            return;
                        }
                        totalQuantity += quantitySold;
                        price += 4.49 * quantitySold;
                        cout << "\nTotal Price So Far: $" << price << endl;
                        cout << "Quanity Sold: " << totalQuantity << "\n\n";
                        break;
                    case 5:
                        cin >> quantitySold;
                        if (quantitySold == -1) {
                            return;
                        }
                        totalQuantity += quantitySold;
                        price += 6.87 * quantitySold;
                        cout << "\nTotal Price So Far: $" << price << endl;
                        cout << "Quanity Sold: " << totalQuantity << "\n\n";
                        break;

                    case -1:
                        cout << "\nTotal Price: $" << price << "\nTotal Quanity Sold: " << totalQuantity << endl;
                        exit(0);
                    default:
                        cout << "\nTotal Price: $" << price << "\nTotal Quanity Sold: " << totalQuantity << endl;
                        exit(0);
                };
                
                
            }

            }while (pNumber != -1 || (pNumber > 0 || pNumber < 6) || quantitySold != -1);

            return;



        }


    

};
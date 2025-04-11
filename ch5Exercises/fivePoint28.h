#include <iostream>
#include <string>

using namespace std;


class fiveTwentyEight {

    public:
        int x, y;

        //5.28
        void twelveDays(){

            cout << "Enter a Christmas day: ";

            cin >> x;
    

            switch(x){

                case 1:
                    cout << "On the first day of Christmas my true love sent to me";
                    y = 12;
                    break;
                case 2:
                    cout << "On the second day of Christmas my true love sent to me";
                    y = 11;
                    break;
                case 3:
                    cout << "On the third day of Christmas my true love sent to me";
                    y = 10;
                    break;
                case 4:
                    cout << "On the fourth day of Christmas my true love sent to me";
                    y = 9;
                    break;
                case 5:
                    cout << "On the fifth day of Christmas my true love sent to me";
                    y = 8;
                    break;
                case 6:
                    cout << "On the sixth day of Christmas my true love sent to me";
                    y = 7;
                    break;
                case 7:
                    cout << "On the seventh day of Christmas my true love sent to me";
                    y = 6;
                    break;
                case 8:
                    cout << "On the eighth day of Christmas my true love sent to me";
                    y = 5;
                    break;
                case 9:
                    cout << "On the ninth day of Christmas my true love sent to me";
                    y = 4;
                    break;
                case 10:
                    cout << "On the tenth day of Christmas my true love sent to me";
                    y = 3;
                    break;
                case 11:
                    cout << "On the eleventh day of Christmas my true love sent to me";
                    
                    y = 2;
                    break;
                case 12:
                    cout << "On the twelfth day of Christmas my true love sent to me";
                    y = 1;
                    break;

            };
            
            switch(y){

                case 12:
                    cout << "\nA partridge in a pear tree.\n";
                    break;
                case 11:
                    cout << "\n\nTwo turtle doves,\nand a partridge in a pear tree\n";
                    break;
                case 10:
                    cout << "\n\nThree French hens,\ntwo turtle doves,\nand a partridge in a pear tree\n";
                    break;
                case 9:
                    cout << "\n\nFour calling birds,\nthree French hens,\ntwo turtle doves,\nand a partridge in a pear tree\n";
                    break;
                case 8:
                    cout << "\n\nFive gold rings,\nfour calling birds,\nthree French hens,\ntwo turtle doves,\nand a partridge in a pear tree\n";
                    break;
                case 7:
                    cout << "\n\nSix geese a-laying,\nfive gold rings,\nfour calling birds,\nthree French hens,\ntwo turtle doves,\nand a partridge in a pear tree\n";
                    break;
                case 6:
                    cout << "\n\nSeven swans a-swimming,\nsix geese a-laying,\nfive gold rings,\nfour calling birds,\nthree French hens,\ntwo turtle doves,\nand a partridge in a pear tree";
                    break;
                case 5:
                    cout << "\n\nEight maids a-milking,\nseven swans a-swimming,\nsix geese a-laying,\nfive gold rings,\n four calling birds,\nthree French hens,\ntwo turtle doves,\nand a partridge in a pear tree";
                    break;
                case 4:
                    cout << "\n\nNine ladies dancing,\neight maids a-milking,\nseven swans a-swimming,\nsix geese a-laying,\nfive gold rings,\nfour calling birds,\nthree French hens,\ntwo turtle doves,\nand a partridge in a pear tree"; 
                    break;
                case 3:
                    cout << "\n\nTen lords a-leaping,\nnine ladies dancing,\neight maids a-milking,\nseven swans a-swimming,\nsix geese a-laying,\nfive gold rings,\nfour calling birds,\nthree French hens,\ntwo turtle doves,\nand a partridge in a pear tree";
                    break;
                case 2:
                    cout <<"\n\nEleven pipers piping,\nten lords a-leaping,\nnine ladies dancing,\neight maids a-milking,\nseven swans a-swimming,\nsix geese a-laying,\nfive gold rings,\nfour calling birds,\nthree French hens,\ntwo turtle doves,\nand a partridge in a pear tree";
                    break;
                case 1:
                    cout <<"\n\nTwelve drummers drumming,\neleven pipers piping,\nten lords a-leaping,\nnine ladies dancing,\neight maids a-milking,\nseven swans a-swimming,\nsix geese a-laying\nfive gold rings,\nfour calling birds,\nthree French hens,\ntwo turtle doves,\nand a partridge in a pear tree\n";
                    break;

            };
            
            
        


    }
};
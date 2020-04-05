#include <bits/stdc++.h>
#include "MyFunctons.h"

using namespace std ;

int ViewMenu(){
    cout << "\n" << string(86,'-') << "\n";
    cout <<string(24,' ')<<"Choose any option to start with :\n\n";
    cout << "1)  OR gate and show truth table\n";
    cout << "2)  AND gate and show truth table\n";
    cout << "3)  NOT gate and show truth table\n";
    cout << "4)  Buffer gate and show truth table\n";
    cout << "5)  XOR gate and show truth table\n";
    cout << "6)  XNOR gate and show truth table\n";
    cout << "7)  NOR gate and show truth table\n";
    cout << "8)  NAND gate and show truth table \n";
    cout << "9)  1's complement \n";
    cout << "10) 2's complement \n";
    cout << "11) Adding two numbers as a binary. Also, as a decimal and display it in binary \n";
    cout << "12) Bases conversions \n";
    cout << "\n" << string(86,'-') << "\n";
    cout << "\nEnter a number from [1 ... 12] to start the process : ";
    int iChoice = 0 ; cin >> iChoice ;
    if ( cin.fail() ){

        cout << "\n\n" << string(20,' ')
        <<string(10,'*')<<string(3,'<')<<" Warning " << string(3,'>') <<string(10,'*')
        <<string(15,' ')
        <<"\n\n";
        cout<<string(3,' ')<<"Please, the the data that you entered isn't a desired data type.\n";
        cout<<string(3,' ')<<"So, Iam asking you to enter integer to process. Check it again.\n\n";
        cout << string(20,' ')<<string(35,'*')<<string(15,' ')<<"\n\n";

        cin.clear();
        cin.ignore(10000,'\n');
        return ViewMenu();
    }
    return iChoice ;
}
void DriveOperations(){
    char ch ;
    bool bCont = 1 ;
    while(bCont){
        int iChoice = ViewMenu();
        switch (iChoice){
        case 1 :
            ORprocess();
            break;
        case 2 :
            ANDprocess();
            break;
        case 3 :
            NOTprocess();
            break;
        case 4 :
            Bufferprocess();
            break;
        case 5 :
            XORprocess();
            break;
        case 6 :
            XNORprocess();;
            break;
        case 7 :
            NORprocess();
            break;
        case 8 :
            NANDprocess();
            break;
        case 9 :
            One_sComplement();
            break;
        case 10 :
            two_sComplement();
            break;
        case 11 :
            AddingTwoNumbers();
            break;
        case 12 :
            driveBasesConversions();
            break;
        default:
        cout << "\n\n" << string(20,' ')
        <<string(10,'*')<<string(3,'<')<<" Wrong choice " << string(3,'>') <<string(10,'*')
        <<string(15,' ')
        <<"\n\n"<<string(3,' ')<<"So, Iam asking you to choose from [ 1 .. 12 ]. Check it again.\n";


        }
        //cout << string(20,' ')<<string(35,'*')<<string(15,' ')<<"\n\n";
        ///Asking user if he want to complete in the process
        cout<<string(3,' ')<<"if you want to close the program press [ N or n ] . otherwise, press any key : ";
        cin >> ch ;
        cout<<"\n"<<string(20,' ')<<string(40,'*')<<string(15,' ')<<"\n\n";
        if ( ch == 'N' || ch == 'n')
            bCont = 0 ;
        else {
            bCont = 1 ;
        }
     }
}

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
#include "header.h"


 // Enable special keys, such as function keys and arrow keys



using namespace std;
/*
 * Create account
 * Check balence
 * Send money
 * Withdraw money
 * Deposit money
 */


int main()
{



    char userChoice;
    ATM myAtm;
    //userAc userOne;
    do
    {
       // userOne.screen(userChoice);
        myAtm.menu();
            cout << "Enter your choice:  ";
            cin >> userChoice;
            if(userChoice == '1')
            {
                ;
            }
            else if(userChoice == '2')
            {
                myAtm.balence();

            }
            else if(userChoice == '3')
            {
                myAtm.sendAmnt();
            }
            else if(userChoice == '4')
            {
                myAtm.withdraw();
            }
            else if(userChoice == '5')
            {
                myAtm.deposit();
            }
            else
            {
                continue;
            }

    }while(userChoice!='x');


    return 0;
}

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
#include "header.h"


using namespace std;

ATM::ATM()
{
    ;
}

void ATM::menu()
{
    system("clear");
    cout << endl;
    cout << "0------------------------------0\n"
         << "|           REAL BANK          |\n"
         << "0------------------------------0\n"
         << "| " << left << setw(29) << "1.Create new account "<< "|\n"
         << "| " << left << setw(29) << "2.Check balence "<< "|\n"
         << "| " << left << setw(29) << "3.Transfer amount "<< "|\n"
         << "| " << left << setw(29) << "4.Withdraw "<< "|\n"
         << "| " << left << setw(29) << "5.Deposit cash "<< "|\n"
         << "| " << left << setw(29) << "X.Exit "<< "|\n"
         << "0------------------------------0\n";
    cout << endl;
}

void ATM::balence()
{
    system("clear");
    cout << "0------------------------------0\n"
         << "|           REAL BANK          |\n"
         << "0------------------------------0\n"
         << "| " << left << setw(29) << "Your balence is: "<< "|\n"
         << "| " << left << setw(29)  << wallet << "|\n"
         << "| " << left << setw(29) << " "<< "|\n"
         << "| " << left << setw(29) << "press A to go back " << "|\n"
         << "0------------------------------0\n";

    char temp;
    cin >> temp;
}

void ATM::sendAmnt()
{
    double senti;
    system("clear");
    cout << "0------------------------------0\n"
         << "|           REAL BANK          |\n"
         << "0------------------------------0\n"
         << "| " << left << setw(29) << "Your balence is: "<< "|\n"
         << "| " << left << setw(29)  << wallet << "|\n"
         << "0------------------------------0\n";
    cout << "Enter amount to send:  ";
        //double amt;
        cin >> senti;
    if(senti<=0 || senti>wallet)
    {
        system("clear");
        cout << "0------------------------------0\n"
             << "|           REAL BANK          |\n"
             << "0------------------------------0\n"
             << "| " << left << setw(29) << "Ivalid transaction."<< "|\n"
             << "| " << left << setw(29) << " "<< "|\n"
             << "| " << left << setw(29) << "press A to go back " << "|\n"
             << "0------------------------------0\n";
    }
    else
    {
        system("clear");
        wallet -= senti;

        cout << "0------------------------------0\n"
             << "|           REAL BANK          |\n"
             << "0------------------------------0\n"
             << "| " << left << setw(29) << "Successfully deposited."<< "|\n"
             << "| " << left << setw(29) << " "<< "|\n"
             << "| " << left << setw(29) << "Your balence is: "<< "|\n"
             << "| " << left << setw(29)  << wallet << "|\n"
             << "| " << left << setw(29) << " "<< "|\n"
             << "| " << left << setw(29) << "press A to go back " << "|\n"
             << "0------------------------------0\n";

    }

    char temp;
    cin >> temp;
}

void ATM::withdraw(/* senderaccountnumber, recipientaccountnumber*/)
{
    double senti;
    system("clear");
    cout << "0------------------------------0\n"
         << "|           REAL BANK          |\n"
         << "0------------------------------0\n"
         << "| " << left << setw(29) << "Your balence is: "<< "|\n"
         << "| " << left << setw(29)  << wallet << "|\n"
         << "0------------------------------0\n";
    cout << "Enter amount to withdraw: ";
        //double amt;
        cin >> senti;
    if(senti<=0 || senti>wallet)
    {
        system("clear");
        cout << "0------------------------------0\n"
             << "|           REAL BANK          |\n"
             << "0------------------------------0\n"
             << "| " << left << setw(29) << "Ivalid transaction."<< "|\n"
             << "| " << left << setw(29) << " "<< "|\n"
             << "| " << left << setw(29) << "press A to go back " << "|\n"
             << "0------------------------------0\n";
    }
    else
    {
        system("clear");
        wallet -= senti;

        cout << "0------------------------------0\n"
             << "|           REAL BANK          |\n"
             << "0------------------------------0\n"
             << "| " << left << setw(29) << "Successfully deposited."<< "|\n"
             << "| " << left << setw(29) << " "<< "|\n"
             << "| " << left << setw(29) << "Your balence is: "<< "|\n"
             << "| " << left << setw(29)  << wallet << "|\n"
             << "| " << left << setw(29) << " "<< "|\n"
             << "| " << left << setw(29) << "press A to go back " << "|\n"
             << "0------------------------------0\n";

    }

    char temp;
    cin >> temp;

}

void ATM::deposit()
{
    system("clear");
    srand(time(0));
    wallet = 5+rand()%15;
    cout << "0------------------------------0\n"
         << "|           REAL BANK          |\n"
         << "0------------------------------0\n"
         << "| " << left << setw(29) << "Successfully deposited."<< "|\n"
         << "| " << left << setw(29) << " "<< "|\n"
         << "| " << left << setw(29) << "Your balence is: "<< "|\n"
         << "| " << left << setw(29) << wallet << "|\n"
         << "| " << left << setw(29) << "press A to go back " << "|\n"
         << "0------------------------------0\n";

    char temp;
    cin >> temp;
}

//=====================================================================================================


/*userAc::userAc()
{
    ;
}

void userAc::screen(char temp)
{
    cout << "0------------------------------0\n"
         << "|           REAL BANK          |\n"
         << "0------------------------------0\n"
         << "| " << left << setw(29) << "1.Login "<< "|\n"
         << "| " << left << setw(29) << "2.Create new account "<< "|\n"
         << "| " << left << setw(29) << "X.Exit "<< "|\n"
         << "0------------------------------0\n";

    if(temp=='1')
    {
        login(int, int);
    }
    else if(temp=='2')
    {
        newAcc(string, string);
    }
    else if(temp=='x')
    {
        break;
    }
    else
    {
        screen(temp);
    }
}

void userAc::login(int acc, int pin)
{
    if ( bAccountNum <= 847000000 && bAccountNum >839999999) // Acceptable values
    {
            srand(time(0));
            wallet = 5 + rand()%20; // Generate a Random amount of money between 1 and 20 in your account
            //return wallet;
            cout << "Noice" << endl;
    }
    else
    {
        cout << "invalid\n";
    }
}

int userAc::newAcc(string name, string sname)
{
    // Generate  an account number between 840000000 and 847000000
    srand(time(0));
    int limit = rand() % 7000001;
    int accNum = 839999999 + limit;

    cout << "0------------------------------0\n"
         << "|           REAL BANK          |\n"
         << "0------------------------------0\n"
         << "| " << left << setw(29) << "Account details."<< "|\n"
         << "| " << left << setw(29) << " "<< "|\n"
         << "| " << left << setw(29) << "Account number: " << accNum << "|\n"
         << "| " << left << setw(29) << "PIN: " << PIN << "|\n"
         << "| " << left << setw(29) << "Name" << name << "|\n"
         << "| " << left << setw(29) << "Surname" << sname << "|\n"
         << "| " << left << setw(29) << "press A to go back " << "|\n"
         << "0------------------------------0\n";
}*/







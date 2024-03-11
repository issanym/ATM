#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <iomanip>





using namespace std;

class ATM
{
    private:
        double wallet=0;
        int transactionNum;
    public:
        ATM();
        void menu();
        void balence();
        void sendAmnt();
        void withdraw();
        void deposit();
        friend class userAc;
};

class userAc
{
private:
    int accNum;
    int PIN;
public:
    userAc();
    void screen(char);
    void login(int, int);
    int newAcc(string, string);
    friend class ATM;
};

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// piggy bank calculate
struct stPiggyBankContent
{
    int pinny, nickel, dime, quarter, dollar;
};

stPiggyBankContent readPiggyBank()
{
    stPiggyBankContent piggyBank;
    cout << " enter total pinny " << endl;
    cin >> piggyBank.pinny;
    cout << " enter total nickel " << endl;
    cin >> piggyBank.nickel;
    cout << " enter total dime " << endl;
    cin >> piggyBank.dime;
    cout << " enter total quarter " << endl;
    cin >> piggyBank.quarter;
    cout << " enter total dollar " << endl;
    cin >> piggyBank.dollar;
    return piggyBank;
}

float calculatePiggyBankContent(stPiggyBankContent piggyBankContent)
{
    return piggyBankContent.pinny * 1 +
           piggyBankContent.nickel * 5 +
           piggyBankContent.dime * 10 +
           piggyBankContent.quarter * 25 +
           piggyBankContent.dollar * 100;
}
int main()
{
    int totalpennies = calculatePiggyBankContent(readPiggyBank());
    cout << "TOTAL PENNIES = " << totalpennies << endl;
    cout << " TOTAL DOLLARS = " << (float)totalpennies / 100;

    return 0;
}

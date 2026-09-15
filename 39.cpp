#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int readPositiveNumber(string message)
{
    int TotalBill;
    cout << message << endl;
    cin >> TotalBill;
    return TotalBill;
}

float calculateRimainder(float totalBill, float TotalCashPaid)
{

    return TotalCashPaid - totalBill;
}
int main()
{
    cout << "********************************************" << endl;
    int totalBill = readPositiveNumber("please enter total bill");
    int totalCashPaid = readPositiveNumber("please enter total cash paid");
    cout << "********************************************" << endl;
    cout <<"\n----------------------------------------------\n\n"<<endl;
    cout <<" reminder = "<<calculateRimainder(totalBill , totalCashPaid);
    cout <<"\n\n----------------------------------------------"<<endl;



    return 0;
}
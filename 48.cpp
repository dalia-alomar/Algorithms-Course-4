#include <iostream>
#include <cmath>
#include <string>
using namespace std;
float ReadPositiveNumber(string message)
{
    int num;
    cout << message << endl;
    cin >> num;
    return num;
}
float TotalMonth(float loanamount, float totalMonth)
{
    return (float)loanamount / totalMonth;
}

int main()
{
    float loanAmount = ReadPositiveNumber("please enter loan amount ");
    float totalMonth = ReadPositiveNumber("how many month");
    cout << "-------------------------------------" << endl;
    cout << "-------------------------------------" << endl;
    cout << "monthly installment = " << TotalMonth(loanAmount, totalMonth);
    cout << "-------------------------------------" << endl;

    return 0;
}
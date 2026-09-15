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
float TotalMonth(float loanamount, float monthlyInstallment)
{
    return (float)loanamount / monthlyInstallment;
}

int main (){
float loanAmount =ReadPositiveNumber("please enter loan amount ");
float mounthlyInstallment = ReadPositiveNumber("please enter monthly installment ");
cout<<"total month to pay = "<<TotalMonth(loanAmount , mounthlyInstallment);


    return 0 ;
}
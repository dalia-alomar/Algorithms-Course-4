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
float totalBillAfterServiceFeeAndSalesTax(int totalbill)
{

    totalbill = totalbill * 1.1;
    totalbill = totalbill * 1.16;
    return totalbill;
}

int main()
{
    float totalBill = readPositiveNumber(" enter total bill please ");
    cout << endl;
    cout << "------------------------------------------------------------------------\n\n\n";
    cout << " total bill after calculate service fee and sales tax =" << totalBillAfterServiceFeeAndSalesTax(totalBill);
    cout << "\n\n\n------------------------------------------------------------------------";

    return 0;
}
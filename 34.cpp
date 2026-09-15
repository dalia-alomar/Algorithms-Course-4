#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int readNumbers()
{
    int num;
    cout << " please enter total sales " << endl;
    cin >> num;
    return num;
}

float comissionPercentage(float totalSales)
{

    if (totalSales >= 1000000)
    {
        return 0.01;
    }
    else if (totalSales >= 500000)
    {
        return 0.02;
    }
    if (totalSales >= 100000)
    {
        return 0.03;
    }
    if (totalSales >= 50000)
    {
        return 0.05;
    }
    else
    {
        return 0.00;
    }
}
float calculateComission(float totalSales)
{

    return comissionPercentage(totalSales) * totalSales;
}
int main()
{
    float totalSales = readNumbers();
    cout << "**************************" << endl;
    cout << " total sales = " << totalSales << endl;
    cout << " comission percentage = " << comissionPercentage(totalSales) << endl;
    cout << "________________________________________" << endl;
    cout << " total comission = " << calculateComission(totalSales) << endl;
    cout << "******************************" << endl;

    return 0;
}
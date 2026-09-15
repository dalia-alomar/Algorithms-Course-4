#include <iostream>
using namespace std;
void readNumbers(float &number1, float &number2, float &number3)
{
    cout << " please enter first num " << endl;
    cin >> number1;
    cout << "enter second number  " << endl;
    cin >> number2;
    cout << "enter third number  " << endl;
    cin >> number3;
}
int checkNumbers(int a, int b , int c)
{
    if (a > b)
        if (a > c)
            return a;
        else
            return c;
    if (b > c)
        return b;
    else
        return c;
}
void printResult(int maxNum)
{
    cout << "max number is == " << maxNum;
}
int main()
{
    float num1, num2 , num3;
    readNumbers(num1, num2 , num3);
    printResult(checkNumbers(num1, num2 , num3));
}
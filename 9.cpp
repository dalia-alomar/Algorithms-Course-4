#include <iostream>
using namespace std;
enum enMark
{
    fail = 0,
    pass = 1
}
void readNumbers(int &num1, int &num2, int &num3)
{

    cout << " enter first number : \n";
    cin >> num1;
    cout << " enter second number : \n";
    cin >> num2;
    cout << " enter third number : \n";
    cin >> num3;
}
float sumNumbers(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

int averageNumbers(int num1, int num2, int num3)
{
    return sumNumbers(num1, num2, num3) / 3;
}
enMark checkMark(float avg)
{
    if (avg >= 50)
        return enMark::pass;
    else
        return enMark::fail;
}
void printResult(float endMark)
{
    if (checkMark(endMark) == enMark::fail)
        cout << "you failed " << endl;
    else
        cout << "you passed" << endl;
}
int main()
{
    int num1, num2, num3;

    readNumbers(num1, num2, num3);
    printResult(checkMark(averageNumbers(num1, num2, num3)));
    return 0;
}
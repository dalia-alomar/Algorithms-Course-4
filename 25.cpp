#include <iostream>
#include <cmath>
using namespace std;
int readNumber()
{
    int num;
    cout << "please enter a number" << endl;
    cin >> num;
    cout << "*****************************************" << endl;
    return num;
}

void printRangeFrom1ToN_usingWhile(int num)
{
    int counter = 0;
    cout << "range printed using while statement" << endl;
    while (counter < num)
    {
        counter++;
        cout << counter << endl;
    }
}

void printRangeFrom1ToN_usingDoWhile(int num)
{
    int counter = 0;
    cout << "range printed using do while statement" << endl;

    do
    {
        counter++;
        cout << counter << endl;
    } while (counter < num);
}

void printRangeFrom1ToN_usingfor(int num)
{
    cout << "range printed using for statement" << endl;
    for (int counter = 1; counter <= num; counter++)
    {
        cout << counter << endl;
    }
}
int main()
{   int n;
    n = readNumber();
    printRangeFrom1ToN_usingWhile(n);
    printRangeFrom1ToN_usingDoWhile(n);
    printRangeFrom1ToN_usingfor(n);

    return 0;
}
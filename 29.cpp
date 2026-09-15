#include <iostream>
#include <cmath>
using namespace std;
// SUM ODD NUMBERS FROM  TO N .
enum enOddOrEven
{
    odd = 1,
    even = 2
};
int readNumber()
{
    int num;
    cout << "please enter a number" << endl;
    cin >> num;
    cout << "*****************************************" << endl;
    return num;
}

enOddOrEven checkNumberOddOrEven(int num)
{
    if (num % 2 == 0)
        return enOddOrEven::even;
    else
        return enOddOrEven::odd;
}

int printRangeFrom1ToN_usingWhile(int num)
{
    int sum = 0;
    int counter = 0;
    cout << "range printed using while statement" << endl;
    while (counter < num)
    {
        counter++;

        if (checkNumberOddOrEven(counter) == enOddOrEven::even)
        {

            sum = sum + counter;
            cout << counter << "  +  ";
        }
    }

    cout << "  =  " ;
    cout<< sum <<endl;
}

int printRangeFrom1ToN_usingDoWhile(int num)
{
    int sum = 0;
    int counter = 0;
    cout << "range printed using do while statement" << endl;

    do
    {
        counter++;
        if (checkNumberOddOrEven(counter) == enOddOrEven::even)

        {
            sum = sum + counter;
            cout << counter << "  +  ";
        }
    } while (counter < num);
    cout << "  =  " ;
    cout << sum <<endl;
}
int printRangeFrom1ToN_usingfor(int num)
{
    int sum = 0;
    cout << "range printed using for statement" << endl;
    for (int counter = 1; counter <= num; counter += 1)
    {
        cout << counter << "  +  ";
        sum = sum + counter;
    }
    cout << "  =  " ;
    cout<< sum <<endl;
}

int main()
{
    int n;
    n = readNumber();
    cout << "______________________________________" << endl;
    printRangeFrom1ToN_usingWhile(n);
    cout << "______________________________________" << endl;

    printRangeFrom1ToN_usingDoWhile(n);
    cout << "______________________________________" << endl;

    printRangeFrom1ToN_usingfor(n);
    cout << "______________________________________" << endl;

    return 0;
}
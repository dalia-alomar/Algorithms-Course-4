#include <iostream>
using namespace std;
enum enNumber
{
    even ,
    odd 
};
int AskNum()
{
    int num;
    cout << "enter your number :  ";
    cin >> num;
    return num;
}
enNumber CheckNum(int num)
{
    int result = num % 2;
    if (result == 0)  
        return enNumber::odd;

    return enNumber::even;
}

void printNum(enNumber num)
{

    if (num == enNumber::even)
        cout << num << " number is even " << endl;
    else
        cout << num << " number is odd " << endl;
}

int main()
{
    printNum(CheckNum(AskNum()));
    return 0;
}
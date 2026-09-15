#include <iostream>
#include <cmath>
#include <string>
using namespace std;
enum enOperationType
{
    add = '+',
    subtrackt = '-',
    multiply = '*',
    divide = '/'
};

int readNumbers(string message)
{
    int num;
    cout << message << endl;
    cin >> num;
    return num;
}

enOperationType operationType()
{
    char opType='+';

    cout << " please enter operation type ( + , - , * , /)" << endl;
    cin >> opType;
    return (enOperationType)opType;
}

float simpleCalculate(float num1, float num2, enOperationType opType)
{
    switch (opType)
    {
    case enOperationType::add:
        return num1 + num2;
        break;
    case enOperationType::subtrackt:
        return num1 - num2;
        break;
    case enOperationType::multiply:
        return num1 * num2;
        break;
    case enOperationType::divide:
        return num1 / num2;
        break;

    default:
        cout << " not found try again later " << endl;
        break;
    }
}

int main()
{
    float number1 = (readNumbers("please enter first num "));
    cout << endl;
    float number2 = (readNumbers("please enter second num "));
    cout << endl;
    enOperationType optype = operationType();
    cout << "result = "  << simpleCalculate(number1, number2, optype);

    return 0;
}
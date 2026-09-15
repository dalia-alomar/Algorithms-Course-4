#include <iostream>
#include <cmath>
#include <string>
using namespace std;
enum enPrimeNotPrime
{
    prime = 1,
    notprime = 2
};

int readPositiveNumber(string message)
{
    int num;
    cout << message << endl;
    cin >> num;
    return num;
}

enPrimeNotPrime checkPrimeNumber(int num)
{
    int number = num / 2;
    if (num < 0)
    {
        cout << readPositiveNumber("enter a positive number please");
    }
    for (int i = 2; i <= number; i++)
    {
        if (num % i == 0)
        {
            return enPrimeNotPrime::notprime;
        }
        else
            return enPrimeNotPrime::prime;
    }
}
void printResult(int num)
{

    switch (checkPrimeNumber(num))
    {
    case enPrimeNotPrime::notprime:
        cout << " is not prime " << endl;

        break;
    case enPrimeNotPrime::prime:
        cout << " is prime " << endl;

        break;

    default:
        cout << " not found" << endl;
        break;
    }
}
int main()
{
    printResult(checkPrimeNumber(readPositiveNumber(" enter a positive number ")));
    return 0;
}
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// power of m
// power of 2 , 3 , 4
int readNumbers()
{
    int num;
    cout << " please enter number " << endl;
    cin >> num;
    return num;
}
int readPower()
{
    int num;
    cout << " please enter power " << endl;
    cin >> num;
    return num;
}

int printPowerOfM(int num, int pow)
{
    if (pow == 0)
    {
        return 1;
    }

    int power = 1;
    for (int i = 1; i <= pow; i++)
    {
        power *= num;
    }
    cout << "**************************************" << endl;
    cout << num << " ^ " << pow << " = ";

    return power;
}
int main()
{

    cout << " " << printPowerOfM(readNumbers(), readPower());
    cout << endl
         << "**************************************" << endl;

    return 0;
}
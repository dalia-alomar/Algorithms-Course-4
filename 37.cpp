#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int readNumbers(string message)
{
    int num;
    cout << message << endl;
    cin >> num;
    return num;
}

float sumNumbers()
{
    int sum = 0, num = 0, counter = 1;
    do
    {
        num = readNumbers("please enter  to sum  a number" + to_string(counter));
        if (num == -99)
        {
            break;
        }

        sum = sum + num;
        counter++;
    } while (num != -99);
    return sum;
}
int main()
{
    cout << "-------------------------------------" << endl;
    cout << "please enter -99 to stop or to sum enter a number" << endl;
    cout << "-------------------------------------" << endl;
    cout << " result = " << sumNumbers();
    cout << endl;
    cout << "-------------------------------------" << endl;

    return 0;
}

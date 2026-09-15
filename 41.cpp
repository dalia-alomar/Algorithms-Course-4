#include <iostream>
#include <cmath>
#include <string>
using namespace std;
float ReadPositiveNumber(string message)
{
    int num;
    cout << message;
    cin >> num;
    return num;
}

float HourOfDays(float totalHours)
{
    return (float)totalHours / 24;
}

float daysOfWeeks(float totalDays)
{
    return (float)HourOfDays(totalDays) / 7;
}

float hourOfWeeks(float totalHours)
{
    return (float)totalHours / 24 / 7;
}
int main()
{
    int totalHours;
    totalHours = ReadPositiveNumber(" please enter total hours ._.");
    cout << endl;
    cout << "\n\n*****************************************************\n\n";
    cout << "total days:  " << HourOfDays(totalHours);
    cout << endl;
    cout << "total weeks:  " << daysOfWeeks(totalHours);
    cout << endl;
    cout << "total weeks:  " << hourOfWeeks(totalHours);
    cout << endl;
    cout << "\n\n*****************************************************\n\n";

    return 0;
}
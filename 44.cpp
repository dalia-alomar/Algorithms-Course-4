#include <iostream>
#include <cmath>
#include <string>
using namespace std;
enum enDaysOfWeek
{
    sat = 1,
    sun = 2,
    mon = 3,
    tue = 4,
    wed = 5,
    thu = 6,
    fri = 7
};

int readNumberInRange(string message, int from, int to)
{
    int num;
    do
    {
        cout << message << endl;
        cin >> num;

    } while (num < from || num > to);
    return num;
}
enDaysOfWeek readDayOfWeek()
{
    return (enDaysOfWeek)readNumberInRange("enter a number from 1 to 7 " , 1 , 7);
}
string printDaysName(enDaysOfWeek day)
{
    switch (day)
    {
    case enDaysOfWeek::sat:
        return "saturday";
    case enDaysOfWeek::sun:
        return "sunday";
    case enDaysOfWeek::mon:
        return "monday";
    case enDaysOfWeek::tue:
        return "tuesday";
    case enDaysOfWeek::wed:
        return "wednesday";
    case enDaysOfWeek::thu:
        return "thursday";
    case enDaysOfWeek::fri:
        return "friday";

    default:
        cout << "not found try again";
        break;
    }
}
int main()
{
    cout << "*********************************************************" << endl;
   cout<< printDaysName(readDayOfWeek());
    cout <<endl<< "*********************************************************" << endl;

    return 0;
}
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
enum enMounthOfYear
{
    jan = 1,
    feb = 2,
    mar = 3,
    apr = 4,
    may = 5,
    jun = 6,
    jul = 7,
    aug = 8,
    sep = 9,
    oct = 10,
    nov = 11,
    des = 12
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

enMounthOfYear readMounthNumber()
{
    return (enMounthOfYear)readNumberInRange("please enter a num for read mounth name from 1 to 12 ", 1, 12);
}

string printMounthName(int day)
{
    enMounthOfYear mounthName;
    switch (day)
    {
    case enMounthOfYear::jan:
        return "january";
    case enMounthOfYear::feb:
        return "february";
    case enMounthOfYear::mar:
        return "maech";
    case enMounthOfYear::apr:
        return "april";
    case enMounthOfYear::may:
        return "may";
    case enMounthOfYear::jun:
        return "juny";
    case enMounthOfYear::jul:
        return "july";
    case enMounthOfYear::aug:
        return "augustos";
    case enMounthOfYear::sep:
        return "september";
    case enMounthOfYear::oct:
        return "octoper";
    case enMounthOfYear::nov:
        return "november";
    case enMounthOfYear::des:
        return "december";

    default: return " not found";
        break;
    }
}
int main(){
cout <<printMounthName(readMounthNumber());

    return 0 ;
}
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
struct stTaskDuration
{
    int numOfSecond,
        numOfMinut,
        numOfHour,
        numOfDays;
};
int readTotalSeconds(string messages)
{
    int num;
    cout << messages << endl;
    cin >> num;
    return num;
}

stTaskDuration totalSecondsToTaskduration(int totalSeconds)
{
    stTaskDuration taskDuration;
    const int totalHours = 60 * 60;
    const int totalMinuts = 60;
    const int totalDays = 60 * 24 * 60;
    int reminder = 0;
    taskDuration.numOfDays = totalSeconds / totalDays;
    reminder = totalSeconds % totalDays;
    taskDuration.numOfHour = reminder / totalHours;
    reminder = reminder % totalHours;
    taskDuration.numOfMinut = reminder / totalMinuts;
    reminder = reminder % totalMinuts;
    taskDuration.numOfSecond = reminder;
    return taskDuration;
}
void printResult(stTaskDuration taskduration)
{

    cout << " total days : " << taskduration.numOfDays << endl;
    cout << " total hours : " << taskduration.numOfHour << endl;
    cout << " total minuts : " << taskduration.numOfMinut << endl;
    cout << "total seconds : " << taskduration.numOfSecond << endl;
}
int main()
{
    int totalSecond;
    totalSecond = readTotalSeconds("please enter total secont to task duration");
    cout << endl;
    cout << "*********************************************************" << endl;
    printResult(totalSecondsToTaskduration(totalSecond));
    cout << "*********************************************************" << endl;
    return 0;
}
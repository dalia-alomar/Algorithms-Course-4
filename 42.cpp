#include <iostream>
#include <cmath>
#include <string>
using namespace std;
struct stTaskDuration
{
    int numOfDays,
        numOfHours,
        numOfMinuts,
        numOfSeconds;
};

float ReadPositiveNumber(string message)
{
    int num;
    cout << message<<endl;
    cin >> num;
    return num;
}

stTaskDuration readTaskDuration()
{
    stTaskDuration taskDuration;
    taskDuration.numOfDays = ReadPositiveNumber("plese enter total days ._.");
    cout << endl;
    taskDuration.numOfHours = ReadPositiveNumber("please enter total hours ._.");
    cout << endl;
    taskDuration.numOfMinuts = ReadPositiveNumber("please enter total minuts");
    cout << endl;
    taskDuration.numOfSeconds = ReadPositiveNumber("please enter total seconds");
    cout << endl;
    return taskDuration;
}

float printTotalSeconds(stTaskDuration taskDuration)
{

    int totalSeconds = 0;
    totalSeconds = taskDuration.numOfSeconds;
    totalSeconds += taskDuration.numOfMinuts * 60;
    totalSeconds += taskDuration.numOfHours * 60 * 60;
    totalSeconds += taskDuration.numOfDays * 24 * 60 * 60;
    return totalSeconds;
}
int main(){
cout<<"*********************************************************"<<endl;
cout << "total secound : "<<printTotalSeconds(readTaskDuration())<<endl;
cout<<"*********************************************************"<<endl;

    return 0 ;
}

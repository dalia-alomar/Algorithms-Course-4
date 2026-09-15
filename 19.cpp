#include <iostream>
#include <cmath>
using namespace std;
float readdiameter()
{
    float diameter;
    cout << "enter a diameter " << endl;
    cin >> diameter;
    return diameter;
}

float circleAreaByDiameter(float d)
{
    const float pi = 3.14;
    float area = (pi * pow(d, 2)) / 4;
    return area;
}
void printResult(float area)
{
    cout << " circli area = " << area;
}
int main()
{
    printResult(circleAreaByDiameter(readdiameter()));

        return 0;
}
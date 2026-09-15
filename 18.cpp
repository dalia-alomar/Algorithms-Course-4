#include <iostream>
using namespace std;
#include <cmath>

float readNumbers()
{
    float r;
    cout << " please enter circle radious " << endl;
    cin >> r;
    return r;
}

float circleArea(float r)
{
    const float pi = 3.14;
    float area = pi * r;
    return area;
}

void printResult(float area)
{
    cout << "\ncircle area = \n"
         << area;
}
int main()
{
    float r;
   
    printResult(circleArea( readNumbers()));
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
void readTrianglData(float &a, float &b, float &c)
{

    cout << "enter side a and side b " << endl;
    cin >> a;
    cout << "enter side b " << endl;
    cin >> b;
    cout << "enter side c " << endl;
    cin >> c;
}

float circleAreaBytriangle(float a, float b, float c)
{
    const float pi = 3.14;
    float p = (a + b + c) / 2;
    float t = (a * b * c) / sqrt(p * (p - a) * (p - b) * (p - c));
    float area = pi * t;
    return area;
}
void printResult(float area)
{
    cout << " circli area = " << area;
}
int main()
{
    float a, b , c;
    readTrianglData(a, b , c);
    printResult(circleAreaBytriangle(a, b , c));

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
float readdiameter()
{
    float a;
    cout << "enter a side " << endl;
    cin >> a;
    return a;
}

float circleAreaInScribedInSquare(float a)
{
    const float pi = 3.14;
    float area = (pi*pow(a,2))/4;
    return area;
}
void printResult(float area)
{
    cout << " circli area = " << area;
}
int main()
{
    printResult(circleAreaInScribedInSquare(readdiameter()));

    return 0;
}

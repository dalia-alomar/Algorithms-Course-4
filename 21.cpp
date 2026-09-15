#include <iostream>
#include <cmath>
using namespace std;
float readdiameter()
{
    float l;
    cout << "enter a ference " << endl;
    cin >> l;
    return l;
}

float circleAreaBySircumFerence(float l)
{
    const float pi = 3.14;
    float area = pow(l,2)/(4*pi);
    return area;
}
void printResult(float area)
{
    cout << " circli area = " << area;
}
int main()
{
    printResult(circleAreaBySircumFerence(readdiameter()));

        return 0;
}
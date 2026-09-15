#include <iostream>
#include <cmath>
using namespace std;
void readTrianglData( float &a , float &b)
{
    
    cout << "enter side a and side b " << endl;
    cin >>a>>b;
   
}

float circleAreaBytriangle(float a , float b)
{
    const float pi = 3.14;
    float area = pi * pow(b/2,2)* ((2*a-b)/(2*a+b));
    return area;
}
void printResult(float area)
{
    cout << " circli area = " << area;
}
int main()
{float a,b;
    readTrianglData(a,b);
    printResult(circleAreaBytriangle(a,b));

        return 0;
}
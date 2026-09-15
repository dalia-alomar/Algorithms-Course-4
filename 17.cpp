#include <iostream>
using namespace std;
#include <cmath>

void readNumbers(float &side, float &hight)
{
    cout << " please enter rectangle side " << endl;
    cin >> side;
    cout << "enter rectangle height " << endl;
    cin >> hight;
}

float trianglearea(float a , float h)
{
    float area = (a/2)*h;
    return area;
}

void printResult(float area)
{
    cout << "\nrectangle area = \n"
         << area;
}
int main()
{
    float num1, num2;
    readNumbers(num1, num2);
    printResult(trianglearea(num1, num2));
    return 0;
}
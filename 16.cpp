
#include <iostream>
using namespace std;
#include <cmath>

void readNumbers(float &side, float &diagonal)
{
    cout << " please enter rectangle side " << endl;
    cin >> side;
    cout << "enter rectangle diagonal " << endl;
    cin >> diagonal;
}

float rectangleareaBySideAndDiagonal(float a, float b)
{
    float area = a * sqrt ( pow(b, 2) - pow(a, 2));
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
    printResult(rectangleareaBySideAndDiagonal(num1, num2));
    return 0;
}
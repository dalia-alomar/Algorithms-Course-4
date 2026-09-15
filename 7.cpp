#include <iostream>
using namespace std;
#include <string>
int readNumber()
{
    int number;
    cout << "enter a number " << endl;
    cin >> number;
    return number;
}
float halfNumber(int number)
{
    return number / 2;
}
void printResult(int num)
{
  string result;
    result = "half of  " + to_string(num) + "  is  " + to_string(halfNumber(num));
   cout<<result;
}
int main()
{
    printResult(readNumber());
    return 0;
}
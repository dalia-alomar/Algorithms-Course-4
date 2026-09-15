#include <iostream>
#include <cmath>
using namespace std;
int readNumber()
{
    int num;
    cout << "please enter a number" << endl;
    cin >> num;
    cout << "*****************************************" << endl;
    return num;
}
void printRangeFromNTo1_usingWhile(int num)
{
    int counter = num + 1;
    while (counter > 1)
    {
        counter--;
        cout << counter << endl;
    }
}
void printRangeFromNTo1_usingDoWhile(int num)
{
    cout << "range printed using do while statement" << endl;
    int counter = num + 1;
    do
    {
        counter--;
        cout << counter << endl;
    } while (counter > 1);
}

void printRangeFromNTo1_usingfor(int num)
{
    cout << "range printed using for statement" << endl;
    for (int counter = num; counter >= 1; counter--)
    {
        cout << counter << endl;
    }
}
int main()
{ 
       int N = readNumber();
    printRangeFromNTo1_usingfor(N);
    cout<<endl<<"_______________________________"<<endl;
    printRangeFromNTo1_usingWhile(N);
    cout<<endl<<"_______________________________"<<endl;
    printRangeFromNTo1_usingDoWhile(N);

}
#include <iostream>
#include <cmath>
using namespace std;

int readNumber()
{
    int num;
    cout << "enter a number " << endl;
    cin >> num;
    return num;
}
int checkPositiveNumber(int num)
{
    while (num<0)
    {
        cout<<readNumber;
    }
    
    return num;
}
void printFactorial(int num)
{
    int fact = 1;
    for (int i = num; i >= 1; i--)
    {
        cout << i << "  *  ";
        fact *= i;
    }
    cout<<"  =  ";
    cout << fact;
}
int main(){
cout<<"\n*********************************"<<endl;
printFactorial(checkPositiveNumber(readNumber()));
cout<<"\n*********************************"<<endl;

    return 0 ;
}
#include <iostream>
using namespace std;
void readNumbers(int &number1, int &number2)
{
    cout << " please enter first num " << endl;
    cin >> number1;
    cout << "enter second number  " << endl;
    cin >> number2;
}
void swapNumbers(int& a , int& b){
    int temp;
    temp = a;
    a=b;
    b=temp;

}
void printResult(int a , int b){
    cout<<"first number == "<<a<<endl;
    cout<<"second number == "<<b<<endl;
}
int main(){
    int num1 , num2 ;
readNumbers(num1 , num2);
printResult(num1 , num2);
swapNumbers(num1 , num2);
printResult(num1 , num2);


    return 0 ;
}
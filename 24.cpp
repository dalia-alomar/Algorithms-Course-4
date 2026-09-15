#include <iostream>

using namespace std;
int readAge()
{
    int age;
    cout << "enter your age between 18 and 45" << endl;
    cin >> age;
    return age;
}

bool checkAgeRange(int age, int from, int to)
{
    return (age >= from && age <= to);
}
float readUntilAgeBetween(int from , int to){
int age=0;
do
{
age=readAge();
} while (!checkAgeRange(age , from , to));

return age;

}
void printResult(int age)
{
    if (checkAgeRange(age, 18, 45))
        cout << age << " is a valid age ";
    else
        cout << age << "is a invalid age";
}
int main()
{
    
    printResult(readUntilAgeBetween(18,45));
    return 0;
}
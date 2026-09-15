#include <iostream>
using namespace std;
struct stInfo
{
    int age;
    bool driveLicense;
    bool workFriend;
};

stInfo readInfo()
{
    stInfo info;
    cout << "how old are you ?" << endl;
    cin >> info.age;
    cout << "Do you have driver license ? 1 or 0 " << endl;
    cin >> info.driveLicense;
    cout << " are you have work friend ?" << endl;
    cin >> info.workFriend;
    return info;
}
bool accept(stInfo info)
{
    if (info.workFriend == true)
        return true;
    else
        return info.age >= 21 && info.driveLicense == true;
}
void printInfo(stInfo info)
{
    if (accept(info))
        cout << "HIRED" << endl;
    else
        cout << "rejected" << endl;
}
int main()
{
    printInfo(readInfo());
    return 0;
}
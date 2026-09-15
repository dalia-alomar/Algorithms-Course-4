#include <iostream>
#include <cmath>
#include <string>
using namespace std;
string readPINnum(){
    string PINcode;
    cout<<"******************************\n\n\n";
   cout <<"enter your password "<<endl;
   cin>>PINcode;
   return PINcode;
}

bool logIN(){
string PINcode ;
int counter=3;
do
{
    counter--;
PINcode=readPINnum();
if (PINcode == "1234")
{
    return 1;
}
else { system("color 4f");
    cout<<"wrong pass , you have more "<<counter<<" try again."<<endl;
}
} while (PINcode != "1234" && counter>=1);

return 0;
}
int main(){
if (logIN())
{
system ("color 2F");
cout<<"your account bank is = 44567"<<endl;
}
else { cout << " your bank account blocked please call with the bank for help you"<<endl;}


    return 0 ;
}
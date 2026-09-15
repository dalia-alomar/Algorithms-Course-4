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
do
{
PINcode=readPINnum();
if (PINcode == "1234")
{
    return 1;
}
else { system("color 4f");
    cout<<"wrong pass ";
}
} while (PINcode != "1234");
return 0;
}
int main(){
if (logIN())
{
system ("color 2F");
cout<<"your account bank is = 44567"<<endl;
}


    return 0 ;
}
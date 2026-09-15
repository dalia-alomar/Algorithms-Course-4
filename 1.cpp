#include <iostream>
using namespace std;
#include <string>
string AskName (){
    string name;
    cout<<"enter your name "<<endl;
   getline(cin , name);
   return name;
   
}
void ReadName(string name)
{
    cout << "your name is : " << name << endl;
}

int main()
{
  
    ReadName(AskName());
    return 0;
}
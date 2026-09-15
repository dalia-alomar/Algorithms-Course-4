#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//power of 2 , 3 , 4 
int readNumbers(){
    int num;
    cout << " please enter number "<<endl;
    cin >> num ;
    return num;

}
void printPower2_3_4(int number){
 int num1 , num2 , num3 ;
  num1 = number * number ;
  num2 = number * number * number ;
  num3 = number * number * number * number;
  cout << number <<" ^ 2 = "<<num1<<endl;
  cout<<"___________"<<endl;
  cout << number <<" ^ 3 = "<<num2<<endl;
  cout<<"___________"<<endl;
  cout << number <<" ^ 4 = "<<num3<<endl;
  cout<<"___________"<<endl;
  

}
int main(){

printPower2_3_4(readNumbers());

    return 0 ;
}
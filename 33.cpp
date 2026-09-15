#include <iostream>
#include <cmath>
#include <string>
using namespace std;


    
int numberRange(float from , float to ){
int grade ;
do
{
cout << " please enter grade "<<endl;
    cin >> grade ;
}
 while (grade<from || grade > to);

return grade ;
}

char getGradeLetter(int grade){
if (grade >= 90)
{
return 'A';
}
else if (grade >= 80)
{
return 'B';
}
else if (grade >= 70)
{
return 'C';
}
else if (grade >= 60)
{
return 'D';
}
else if (grade >= 50)
{
return 'E';
}
else  
{
return 'F';
}


}
int main()
{
cout << " result = "<<getGradeLetter(numberRange(0 , 100));


    return 0 ;
}
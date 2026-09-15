#include <iostream>
using namespace std;
void readNumbers(float &width, float &hight)
{
    cout << " please enter rectangle width " << endl;
    cin >> width;
    cout << "enter rectangle hight  " << endl;
    cin >> hight;
}

float rectangleArea(float width, float hight){
    float area ;
    area= width*hight;
    return area;

}


void printResult(float area){
    cout<<"\nrectangle area = \n"<<area ;
}
int main(){
float num1 , num2 ;
readNumbers(num1 , num2);
printResult(rectangleArea(num1 , num2));
    return 0 ;
}
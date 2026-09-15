#include <iostream>
using namespace std ;
enum enMark{ fail =0 , pass =1};
int readNumber() {
   float mark;
    cout<<"enter your mark pleas4e"<<endl;
    cin>>mark;
    return mark;
}
enMark checkMark( int mark){
    if (mark>=50)
    return enMark::pass;
    else
    return enMark::fail;
}
void printResult(int mark){
    if(checkMark(mark)==enMark::pass)
    cout<<"you passed"<<endl;
    else 
    cout<<" you failed"<<endl;
}
int main(){
     printResult(readNumber());
    return 0 ;

}
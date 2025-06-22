#include<iostream>
using namespace std;
//divide a intereger and the the float/original value .
int main(){
    int x;
    cout<<"enter a integer number: ";
    cin>> x;
    //typecusting :- input value is integer but we need the output value in float 
    float y=(float)x ;
    float m=y/2;
    cout<<"the divided value is : " <<m;
}

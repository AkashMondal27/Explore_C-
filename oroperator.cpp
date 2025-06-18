//take 3 integer input and tell it is divisible by 5 or 3
#include<iostream>
using namespace std ;
int main(){
    int x;
    cout<<"enter the a number :";
    cin>>x;
    if( x%5==00 || x%3==0){
        cout<<"divisible by 5 or 3 ";
    }
    else{
        cout<<"not divisible by 5  ot 3";
    }
}
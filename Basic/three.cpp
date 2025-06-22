//find the number is 3 digit or not
#include<iostream>
using namespace std ;
int main(){
    float x;
    cout<<"enter the number:";
    cin>>x;
 
    if(x>99 && x<1000){
        cout<<"it is a three digit number";
    }
    else{
        cout<<" it is not a 3 digit number ";
    }



}
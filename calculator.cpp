#include<iostream>
using namespace std;
int main(){
    int x; 
    cout<< " enter the a number";
    cin>>x;
    char ch;
    cout<<"enter the character";
    cin>>ch;
    int y;
    cout<<"enter the the number :";
    cin>>y;

    if( ch=='+'){
        cout<<"the ans is :"<<x+y;
           }
    if( ch=='-'){
        cout<<"the ans is :"<<x-y;
           }
     if( ch=='*'){
        cout<<"the ans is :"<<x*y;
           }
    if( ch=='/'){
        cout<<"the ans is :"<<x/y;
           }
           
           
}

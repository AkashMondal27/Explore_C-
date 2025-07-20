/*  combination  =  n!/(r! *(n-r)! )*/
#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter the values of n  :";
    cin>>n; 
     int r;
    cout<<"Enter the valyues pf r:";
    cin>>r;
    int a=1; //a=n!
    for(int i=1 ;i<=n; i++){
        a=a*i;
    }
     int b=1; //b=r!
    for(int i=1 ;i<=r; i++){
        b=b*i;
    }
     int c=1; // c=(n-r)!
    for(int i=1 ;i<=(n-r); i++){
        c=c*i;
    }
    cout<<a/(b*c);
}


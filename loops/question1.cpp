#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n ";
    cin>>n;
     int i=n/2;
     while (i>=1)
     {
        if(n%i==0){
            cout<<i<<",";
            break;
        }
        i--;
     }
    }
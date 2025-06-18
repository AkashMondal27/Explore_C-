#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n ";
    cin>>n;
    // int f=1 ; //to store the highest facor on it
    // for(int i=1;i<=n;i++){
    //     if(n%i==0) f=i;

    // }
    // cout<<f;

    for(int i=n/2;i>=1; i--){
        if(n%i==0){
            cout<<i<<endl;
            break;   //To get put of the loop instaintly . 1st n/2=30 is cheack .is 30>=1 .yes so print 30 .than break the loop
        }
    }
}

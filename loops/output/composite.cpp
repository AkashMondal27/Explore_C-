//Composite:- if n has exra factors/factors except 1 and n than it is called COMPOSITE .
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n ";
    cin>>n;
    for(int i=2; i<n/2;i++){
        if(n%i==0){
        cout<<"composite";
        break;}

        else{
            cout<<"Not composite";
        }
    }
}
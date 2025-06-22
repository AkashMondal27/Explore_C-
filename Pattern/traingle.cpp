#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows :";
    cin>>n;

    for(int i=1;i<=n;i++){ 
        for( int j=1; j<=i;j++){
            cout<< n-i+1 <<" ";  //to give thr maximum value of j we have to give j<=n=1-i
        }
        cout<<endl;
  
    }
    return 0;
}


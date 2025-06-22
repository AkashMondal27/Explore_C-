#include<iostream>
//  to print odd number 1 3  5 ,we can see that the number are increase by 2 so  j*2-1
using namespace std;
int main(){
   int n;
   cout<<" Enter the vslue of n ;";
   cin>>n;
    for(int i=1;i<=n;i++){
        //  for( int j=1;j<= i;j++){
        //      cout<< j*2-1<< " ";
        int a =1;
         for( int j=1;j<=i ; j++){
            cout<< a <<"";
            a=a+2;
         }
        
         cout<< endl;
    }
    }

/* 
1            
0 1         in thid pattern we can see some hinds like 
1 0 1           when  i%2 1=2  prit 1 , (i+j)%2==0   print 1   else  print 0
0 1 0 1         
1 0 1 0 1       */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows :";
    cin>>n;

    for(int i=1;i<=n;i++){ 
        for( int j=1; j<=i;j++){
           if((i+j)%2==0) cout<< 1<<" ";
           else cout<<0<<" ";
        }
        cout<<endl;
  
    }
    return 0;
}


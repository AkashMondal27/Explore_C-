#include<iostream>
using namespace std;
// basics of pattern printing in c+ 
int main(){
    int m;
    cout<<"Enter the number of rows :";
    cin>>m;
       int n;
   cout<<"Enter the number of column :";
   cin>>n;
    for(int i=1;i<=m;i++){  //initially 1st loop use for rows

        for(int j=1;j<=n;j++){  // intially 2nd loop use for coloumn
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;

}


// * * * * * *   Holow ractringle .
// *         *
// *         *
// * * * * * *

     #include<iostream>
     using namespace std;
     int main(){
        int m;
        cout<<"enter the value of raws :";
        cin>>m;
        int n;
        cout<<" Ener the vallue of n :";
        cin>> n;
             for( int i=1 ; i<=m; i++){
                for( int j=1; j<=n; j++){
                    if( i==1 || j==1 || i==m || j==n )
                    cout<<"* ";
                    else 
                    cout<< "  ";
                }
                cout<< endl;
             }
    }
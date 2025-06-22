/* 
    *
    *
* * * * *      print the pattern 
    *          we can see that  i=3|| j=3  printing * else " "   here 3= n/2 +1
    *          
      */
     #include<iostream>
     using namespace std;
     int main(){
        int n;
        cout<<"enter the value of n :";
        cin>>n;
        int mid= n/2 +1;   // becUSE In the in the midial we have to print the *
        for (int i=1; i<=n; i++){
            for(int j=1; j<=n ;j++){
                if(i==mid || j==mid)cout<<" * " ;
                else cout<< "   ";
            }
            cout<< endl;
     }
     return 0;
    }
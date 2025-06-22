#include<iostream>
using namespace std;
int main(){
    float x,y,z;
    cout<<"Enter three number :";
    cin>>x>>y>>z;
    //Nested if else = without using multiple conditoin  
   if(x!=y&& x!=z && y!=z){
        if(x>y){

         if(x>z){
            cout<<x<<"is greatest :";
         }
         else{
            cout<<z <<"is greatest";
         } 
          }
       else{
           if(y>z){
            cout<<y<<" is greatest :";

           }
          else{
            cout<<z <<"is greatest";
          }
     }
  }
else{
    cout<<"all 3 number are equal";
}

return 0;
}
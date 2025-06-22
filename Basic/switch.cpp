#include<iostream>
using namespace std;
int main(){
    int x; 
    cout<< " enter the a number";
    cin>>x;
    char ch;
    cout<<"enter the character";
    cin>>ch;
    int y;
    cout<<"enter the the number :";
    cin>>y;

           switch (ch)
           {
           case'+':
            cout<<x+y<<endl;
            break;
            case'-':
            cout<<x-y<<endl;
            break;
            case'*':
            cout<<x*y<<endl;
            break;
            case'/':
            cout<<x/y<<endl;
            break;
           
           default:
           cout<<"Invalid Operation"<<endl;
            break;
           }
}



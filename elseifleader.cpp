#include<iostream>
using namespace std;
//81-100=very good, 61-80=good, 41-60=average, <=40 =fail
int main(){
    float x;
    cout<<"Enter a number :";
    cin>>x;
    if(x>=81){
        cout<<"very good";
    }
    else if(x>=61) {
        cout<<"good";
    }
    else if(x>=41) {
        cout<<"average";
    }
    else{
        cout<<"fail";
    }
    return 0;
}
        
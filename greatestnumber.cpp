// Write a program that takes three integers from the user and tells:
// - Which one is the greatest
// - If two or all three numbers are equal, print appropriate messages like "All numbers are equal" or 
// /"Two numbers are equal and greater than the third"
#include <iostream>
using namespace std;

int main() {
    float x;
    cout << "Enter 1st number ";
    cin >> x;
    float y;
    cout << "Enter 2nd number ";
    cin >> y;
    float z;
    cout << "Enter 3rd number ";
    cin >> z;

    if (x>y && y>=z) {
        cout<<x<<"is the greatest number ";
    }
     else if (y>x && x>=z)
     {
        cout<<y<<"is the greatest number ";
     }
     else if( z>y && y>=x){
        cout<<z<<"is greatest number";
     }
     else if( x=y=z ){
        cout<<"all numbers are equal";
     }
    return 0;
}
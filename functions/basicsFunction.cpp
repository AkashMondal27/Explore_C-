/* A function is a block of code that performs a specific task whenever you call it.
 Instead of writing the same block of code again and again, you define it once inside a function,
 and then just "call" it whenever needed. */

#include<iostream>
using namespace std;
void greet(){
    cout<<" Good mornig AAkash !"<< endl;
    cout<<" How are you ?"<<endl ;
    return; // it use to stop the function 
} 
 void care(){
    cout<<" are you ok ?"<<endl;
    return;    // after reteurn the next line wii not be print .
    cout<<" is every thing good ?";   // this iine will not be shown oon out put screen 
 }

int main (){     //this is main function .it is use to call the functions 
    greet();     // this the the way to call any function
    cout<< " hey "<<endl;
    care();       //calling .mthe 2nd function
    return 0;   //in main function the return 0 is work by default , so in c++ if we don't use thr ' return ' it will work . 
}
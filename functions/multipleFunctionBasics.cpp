#include<iostream>
using namespace std;
void india(){
    cout<<" Good mornig INDIA !"<< endl;
    return;
}
    
 void usa(){
    cout<<" you are in usa "<<endl;
    india();  // we can also call the 1st function in 2nd function 
    
 }
int main(){
    usa();    //in this "usa" the main finction wil call the "usa function" & via use it will call " india function"

}
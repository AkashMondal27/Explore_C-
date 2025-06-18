#include <iostream>
using namespace std;

int main() {
    float cp; // cost price
    cout << "Enter the cost price: ";
    cin >> cp;

    float sp; // selling price
    cout << "Enter the selling price: ";
    cin >> sp;

    if (sp > cp) {
        cout << "Profit" << endl;
        cout << "The profit is: " << sp - cp;
    }
    else if (cp > sp) {
        cout << "Loss" << endl;
        cout << "The loss is: " << cp - sp;
    }
    else {
        cout << "No profit, no loss";
    }

    return 0;
}
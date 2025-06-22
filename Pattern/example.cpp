#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    // Validate that the input number is positive
    if(n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    // The first two Fibonacci numbers
    long long first = 0, second = 1;
    int count = 0; // counter to track the number of printed terms

    cout << "Fibonacci Series: ";

    while(count < n) {
        // For the first term, print 'first'
        if(count == 0) {
            cout << first << " ";
        }
        // For the second term, print 'second'
        else if(count == 1) {
            cout << second << " ";
        }
        // For subsequent terms, calculate the next number
        else {
            long long next = first + second;
            cout << next << " ";
            first = second;   // update 'first' for the next calculation
            second = next;    // update 'second' as the most recent term
        }
        count++;  // increment counter after each term is printed
    }

    cout << endl;  // add a newline after printing the series
    return 0;
}
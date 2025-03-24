#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    if (num1 > 0 && num2 > 0) {
        cout << "Both numbers are positive." << endl;
    } else if (num1 < 0 && num2 > 0) {
        cout << "The first number is negative and the second number is non-negative, so it's not possible to have both numbers as non-positive." << endl;
    } else if (num1 < 0 && num2 < 0) {
        cout << "Both numbers are negative." << endl;
    } else {
        cout << "All numbers are positive or all numbers are non-negative." << endl;
    }
    
    return 0;
}

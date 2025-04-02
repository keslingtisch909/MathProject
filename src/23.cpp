#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    if (n % 2 == 0) {
        cout << n + 1 << " is even." << endl;
    } else {
        cout << n + 1 << " is odd." << endl;
    }
    
    return 0;
}

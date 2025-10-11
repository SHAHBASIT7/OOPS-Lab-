// Fibonacci Series (C++)
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer!" << endl;
        return 0;
    }

    long long a = 0, b = 1, next;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }

    cout << endl;
    return 0;
}


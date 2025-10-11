// pair with break and continue
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    
    cout << "Enter a number: ";
    cin >> n;
    
    if (cin.fail() || n < 0) {
        cout << "Invalid input!" << endl;
        return 1;
    }
    
    int limit = sqrt(n);
    bool found = false;
    
    cout << "Pairs (x, y) such that x² + y² = " << n << ":" << endl;
    
    for (int x = 0; x <= limit; x++) {
        for (int y = 0; y <= limit; y++) {
            if (x * x + y * y > n) {
                continue; // Skip if sum exceeds n
            }
            
            if (x * x + y * y == n) {
                cout << "(" << x << ", " << y << ")" << endl;
                found = true;
            }
        }
    }
    
    if (!found) {
        cout << "No such pairs found." << endl;
    }
    
    return 0;
}

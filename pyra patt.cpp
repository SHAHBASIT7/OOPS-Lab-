// pyramid pattern
#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter number of rows: ";
    cin >> n;
    
    if (cin.fail() || n <= 0) {
        cout << "Invalid input!" << endl;
        return 1;
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    
    return 0;
}

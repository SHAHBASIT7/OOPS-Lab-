// number reversal 
#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int number;
    
    do {
        cout << "Enter a positive integer (0 to exit): ";
        cin >> number;
        
        if (cin.fail()) {
            cout << "Invalid input!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        
        if (number > 0) {
            int reversed = reverseNumber(number);
            cout << "Reversed number: " << reversed << endl;
        } else if (number < 0) {
            cout << "Please enter a positive integer!" << endl;
        }
        
    } while (number != 0);
    
    cout << "Program exited." << endl;
    return 0;
}

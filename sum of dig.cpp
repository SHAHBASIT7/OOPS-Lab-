//  Sum of Digits 
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter an integer: ";
    cin >> num;

    int temp = num;
    if (temp < 0) temp = -temp; 

    while (temp != 0) {
        int digit = temp % 10;  
        sum += digit;           
        temp /= 10;             
    }

    cout << "Sum of digits of " << num << " is: " << sum << endl;

    return 0;
}


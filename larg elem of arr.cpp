//Find the Largest Element in an Array (C++)
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int largest = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    cout << "The largest element is: " << largest << endl;

    return 0;
}


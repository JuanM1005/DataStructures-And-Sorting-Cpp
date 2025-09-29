#include <iostream>

using namespace std;

// Returns the index of the element if found, otherwise -1
int binarySearch(int arr[], int n, int v);

int main() {
    // The array must be SORTED
    int arr[] = {2, 4, 7, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    int value;
    cout << "Enter a value to search: "; cin >> value;

    int result = binarySearch(arr, n, value);

    if(result != -1) {
        cout << "Value: " << value << " found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}

int binarySearch(int arr[], int n, int v) {
    int left = 0, right = n - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(arr[mid] == v) {
            return mid; // found
        } else if(arr[mid] < v) {
            left = mid + 1; // seach in the right half
        } else {
            right = mid - 1; // search in the left half
        }
    }

    return -1; // not found
}
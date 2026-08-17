/*
Design the Logic to Find a Missing Number in a Sorted Array. Given an array of n-1 distinct integers in the range of 1 to n, 
find the missing number in it in a Sorted Array 
(a) Linear time 
(b) Using binary search. 
*/

#include <iostream>
using namespace std;

int linearMissing(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != i + 1)
            return i + 1;
    }
    return n;
}

int binaryMissing(int arr[], int n) {
    int low = 0, high = n - 2;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == mid + 1)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low + 1;
}

int main() {
    int arr[100], n, choice;

    cout << "Enter value of n: ";
    cin >> n;

    cout << "Enter " << n - 1 << " sorted elements:\n";
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];

    cout << "\n1. Linear Search Method\n";
    cout << "2. Binary Search Method\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
        cout << "Missing Number = " << linearMissing(arr, n);
    else if (choice == 2)
        cout << "Missing Number = " << binaryMissing(arr, n);
    else
        cout << "Invalid Choice";

    return 0;
}
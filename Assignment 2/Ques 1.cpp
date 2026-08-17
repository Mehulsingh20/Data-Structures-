/*
Implement the binary search algorithm regarded as a fast search algorithm with run-time complexity of Ο(log n) in comparison to the Linear Search
*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int arr[100], n, key;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int pos = binarySearch(arr, n, key);

    if (pos != -1)
        cout << "Element found at index " << pos;
    else
        cout << "Element not found";

    return 0;
}
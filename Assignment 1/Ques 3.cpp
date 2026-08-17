/*
Design the logic of a program to rotate a 1-D array by K positions. 
*/


#include <iostream>
using namespace std;

int main() {
    int arr[100], temp[100];
    int n, k, choice;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter K: ";
    cin >> k;

    k = k % n;

    cout << "1. Left Rotation\n";
    cout << "2. Right Rotation\n";
    cin >> choice;

    if (choice == 1) {
        for (int i = 0; i < n; i++)
            temp[i] = arr[(i + k) % n];
    } else {
        for (int i = 0; i < n; i++)
            temp[(i + k) % n] = arr[i];
    }

    cout << "Rotated Array:\n";
    for (int i = 0; i < n; i++)
        cout << temp[i] << " ";
}
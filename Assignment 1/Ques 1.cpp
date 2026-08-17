/*
Develop a Menu driven program to demonstrate the following operations of Arrays 
——MENU——- 
1. CREATE
2. DISPLAY
3. INSERT
4. DELETE
5. LINEAR SEARCH
6. EXIT
*/

#include <iostream>
using namespace std;

int arr[100], n = 0;

void create() {
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void display() {
    if (n == 0) {
        cout << "Array is empty\n";
        return;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insert() {
    int pos, value;

    cout << "Enter position: ";
    cin >> pos;

    cout << "Enter value: ";
    cin >> value;

    if (pos < 0 || pos > n) {
        cout << "Invalid position\n";
        return;
    }

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    n++;
}

void del() {
    int pos;

    cout << "Enter position: ";
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid position\n";
        return;
    }

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;
}

void linearSearch() {
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i << endl;
            return;
        }
    }

    cout << "Element not found\n";
}

int main() {
    int choice;

    do {
        cout << "\n1. Create\n";
        cout << "2. Display\n";
        cout << "3. Insert\n";
        cout << "4. Delete\n";
        cout << "5. Linear Search\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert();
                break;
            case 4:
                del();
                break;
            case 5:
                linearSearch();
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 6);

    return 0;
}
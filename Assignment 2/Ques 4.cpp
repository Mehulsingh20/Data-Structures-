#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int choice;

    cout << "1. Concatenate two strings" << endl;
    cout << "2. Reverse a string" << endl;
    cout << "3. Delete vowels from a string" << endl;
    cout << "4. Sort strings alphabetically" << endl;
    cout << "5. Convert uppercase to lowercase" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();

    if (choice == 1) {
        char str1[100], str2[100];

        cout << "Enter first string: ";
        cin.getline(str1, 100);

        cout << "Enter second string: ";
        cin.getline(str2, 100);

        strcat(str1, str2);

        cout << "Concatenated string: " << str1;
    }

    else if (choice == 2) {
        char str[100];

        cout << "Enter a string: ";
        cin.getline(str, 100);

        int n = strlen(str);

        for (int i = 0; i < n / 2; i++) {
            char temp = str[i];
            str[i] = str[n - i - 1];
            str[n - i - 1] = temp;
        }

        cout << "Reversed string: " << str;
    }

    else if (choice == 3) {
        char str[100];

        cout << "Enter a string: ";
        cin.getline(str, 100);

        int j = 0;

        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
                str[i] != 'o' && str[i] != 'u' &&
                str[i] != 'A' && str[i] != 'E' && str[i] != 'I' &&
                str[i] != 'O' && str[i] != 'U') {
                str[j++] = str[i];
            }
        }

        str[j] = '\0';

        cout << "String without vowels: " << str;
    }

    else if (choice == 4) {
        char str[10][100], temp[100];
        int n;

        cout << "Enter number of strings: ";
        cin >> n;
        cin.ignore();

        for (int i = 0; i < n; i++) {
            cout << "Enter string " << i + 1 << ": ";
            cin.getline(str[i], 100);
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (strcmp(str[i], str[j]) > 0) {
                    strcpy(temp, str[i]);
                    strcpy(str[i], str[j]);
                    strcpy(str[j], temp);
                }
            }
        }

        cout << "Strings in alphabetical order:" << endl;

        for (int i = 0; i < n; i++)
            cout << str[i] << endl;
    }

    else if (choice == 5) {
        char ch;

        cout << "Enter an uppercase character: ";
        cin >> ch;

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        cout << "Lowercase character: " << ch;
    }

    else {
        cout << "Invalid choice";
    }

    return 0;
}
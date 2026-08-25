/*Write a program to count the total number of distinct elements in an array of length  n*/

#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[n];
    for (int i = 0;i<n; i++){
        cin >> arr[i];
    }
    int count = n;
    for (int i = 0; i < n-1;i++){
        for (int j = i+1;j<n;j++){
            if (arr[i] == arr[j] ){
                count = count - 1 ;
            }
        }
    }
    cout << count;

    return 0;
}
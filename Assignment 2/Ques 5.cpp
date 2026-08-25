/*Space required to store any two-dimensional array is 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 𝑟𝑜𝑤𝑠 × 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 𝑐𝑜𝑙𝑢𝑚𝑛𝑠. 
Assuming an array is used to store elements of the following matrices, implement an efficient way that reduces the space requirement. 
(a) Diagonal Matrix. (b) Tri-diagonal Matrix. (c) Lower triangular Matrix. (d) Upper triangular Matrix. (e) Symmetric Matrix 
*/

#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[n];
    for (int i = 0;i<n; i++){
        cin >> arr[i];
    }
    for (int i = 0;i<n;i++){
        for (int j = 0; j < n;j++){
            if (i == j){
                cout << arr[i];
            }else cout << 0 ;
        }
        cout << endl;
    }

    return 0;
}
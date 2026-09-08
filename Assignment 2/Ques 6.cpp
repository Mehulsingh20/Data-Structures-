#include <iostream>
using namespace std;

int main() {
    int sparse[3][3] = {
        {0, 5, 0},
        {0, 0, 8},
        {3, 0, 0}
    };

    int B[3][3]= {
        {0,2,0},
        {4,0,0},
        {3,0,6}
    }

    int rows = 3;
    int cols = 3;
    int triplet[10][3];
    int nonZero = 0;
    int triplet2[10][3];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (sparse[i][j] != 0) {
                nonZero++;
                triplet[nonZero][0] = i;
                triplet[nonZero][1] = j;
                triplet[nonZero][2] = sparse[i][j];
            }
        }
    }
    int nonZero
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (sparse[i][j] != 0) {
                nonZero++;
                triplet[nonZero][0] = i;
                triplet[nonZero][1] = j;
                triplet[nonZero][2] = B[i][j];
            }
        }
    }


    triplet[0][0] = rows;
    triplet[0][1] = cols;
    triplet[0][2] = nonZero;

    cout << "Triplet representation:\n";

    for (int i = 0; i <= nonZero; i++) {
        cout << triplet[i][0] << " "
             << triplet[i][1] << " "
             << triplet[i][2] << endl;
    }

    int transpose[10][3];

    transpose[0][0] = cols;
    transpose[0][1] = rows;
    transpose[0][2] = nonZero;

    for (int i = 1; i <= nonZero; i++) {
        transpose[i][0] = triplet[i][1];
        transpose[i][1] = triplet[i][0];
        transpose[i][2] = triplet[i][2];
    }

    cout << "\nTranspose:\n";

    for (int i = 0; i <= nonZero; i++) {
        cout << transpose[i][0] << " "
             << transpose[i][1] << " "
             << transpose[i][2] << endl;
    }

    return 0;
}

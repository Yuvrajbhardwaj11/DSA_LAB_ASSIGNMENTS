#include <iostream>
using namespace std;

void transpose(int A[][3], int T[][3]) {
    int m = A[0][0], n = A[0][1], nz = A[0][2];
    T[0][0] = n;
    T[0][1] = m;
    T[0][2] = nz;
    int k = 1;
    for (int col = 0; col < n; col++) {
        for (int i = 1; i <= nz; i++) {
            if (A[i][1] == col + 1) {
                T[k][0] = A[i][1];
                T[k][1] = A[i][0];
                T[k][2] = A[i][2];
                k++;
            }
        }
    }
}

void add(int A[][3], int B[][3], int C[][3]) {
    if (A[0][0] != B[0][0] || A[0][1] != B[0][1]) {
        cout << "Matrices cannot be added\n";
        return;
    }
    int i = 1, j = 1, k = 1;
    C[0][0] = A[0][0];
    C[0][1] = A[0][1];
    while (i <= A[0][2] && j <= B[0][2]) {
        if (A[i][0] < B[j][0] || (A[i][0] == B[j][0] && A[i][1] < B[j][1])) {
            C[k][0] = A[i][0];
            C[k][1] = A[i][1];
            C[k][2] = A[i][2];
            i++; k++;
        } else if (B[j][0] < A[i][0] || (B[j][0] == A[i][0] && B[j][1] < A[i][1])) {
            C[k][0] = B[j][0];
            C[k][1] = B[j][1];
            C[k][2] = B[j][2];
            j++; k++;
        } else {
            C[k][0] = A[i][0];
            C[k][1] = A[i][1];
            C[k][2] = A[i][2] + B[j][2];
            i++; j++; k++;
        }
    }
    while (i <= A[0][2]) {
        C[k][0] = A[i][0];
        C[k][1] = A[i][1];
        C[k][2] = A[i][2];
        i++; k++;
    }
    while (j <= B[0][2]) {
        C[k][0] = B[j][0];
        C[k][1] = B[j][1];
        C[k][2] = B[j][2];
        j++; k++;
    }
    C[0][2] = k - 1;
}

void multiply(int A[][3], int B[][3], int C[][3]) {
    if (A[0][1] != B[0][0]) {
        cout << "Matrices cannot be multiplied\n";
        return;
    }
    int k = 1;
    C[0][0] = A[0][0];
    C[0][1] = B[0][1];
    for (int i = 1; i <= A[0][2]; i++) {
        for (int j = 1; j <= B[0][2]; j++) {
            if (A[i][1] == B[j][0]) {
                int row = A[i][0];
                int col = B[j][1];
                int val = A[i][2] * B[j][2];
                bool found = false;
                for (int t = 1; t < k; t++) {
                    if (C[t][0] == row && C[t][1] == col) {
                        C[t][2] += val;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    C[k][0] = row;
                    C[k][1] = col;
                    C[k][2] = val;
                    k++;
                }
            }
        }
    }
    C[0][2] = k - 1;
}

void display(int A[][3]) {
    int nz = A[0][2];
    cout << "\nRow\tCol\tValue\n";
    for (int i = 0; i <= nz; i++) {
        cout << A[i][0] << "\t" << A[i][1] << "\t" << A[i][2] << "\n";
    }
}

int main() {
    int A[10][3] = {{3,3,4}, {1,1,5}, {1,3,8}, {2,2,3}, {3,1,6}};
    int B[10][3] = {{3,3,3}, {1,2,2}, {2,3,7}, {3,1,4}};
    int T[10][3];
    int C[20][3];
    int D[20][3];
    transpose(A, T);
    cout << "Transpose of A:";
    display(T);
    add(A, B, C);
    cout << "\nAddition of A + B:";
    display(C);
    multiply(A, B, D);
    cout << "\nMultiplication of A * B:";
    display(D);
    return 0;
}

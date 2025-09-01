#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Diagonal Matrix
    int diag[n];
    for (int i = 0; i < n; i++) cin >> diag[i];

    cout << "\nDiagonal Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << diag[i] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }

    // Tri-diagonal Matrix
    int tri[3 * n - 2];
    for (int i = 0; i < 3 * n - 2; i++) cin >> tri[i];

    cout << "\nTri-diagonal Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i - 1 || j == i || j == i + 1) cout << tri[k++] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }

    // Lower Triangular
    int lower[n * (n + 1) / 2];
    k = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++) cin >> lower[k++];

    cout << "\nLower Triangular Matrix:\n";
    k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i) cout << lower[k++] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }

    // Upper Triangular
    int upper[n * (n + 1) / 2];
    k = 0;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++) cin >> upper[k++];

    cout << "\nUpper Triangular Matrix:\n";
    k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i) cout << upper[k++] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }

    // Symmetric Matrix
    int sym[n * (n + 1) / 2];
    k = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++) cin >> sym[k++];

    cout << "\nSymmetric Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i) cout << sym[(i * (i + 1)) / 2 + j] << " ";
            else cout << sym[(j * (j + 1)) / 2 + i] << " ";
        }
        cout << endl;
    }

    return 0;
}

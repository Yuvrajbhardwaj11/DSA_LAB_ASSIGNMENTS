#include <iostream>
using namespace std;

int main() {
    int n, m;
    int a[100][100];

    // Input array dimensions
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;

    // Input elements
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Calculate sum of each row
    cout << "\nSum of each row:" << endl;
    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < m; j++) {
            rowSum += a[i][j];
        }
        cout << "Row " << i + 1 << " sum = " << rowSum << endl;
    }

    // Calculate sum of each column
    cout << "\nSum of each column:" << endl;
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < m; i++) {
            colSum += a[i][j];
        }
        cout << "Column " << j + 1 << " sum = " << colSum << endl;
    }

    return 0;
}

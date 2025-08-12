#include <iostream>
using namespace std;

int missingNumber(int arr[], int n) {
    int total = n * (n + 1) / 2; 
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    return total - sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 6}; 
    int n = sizeof(arr) / sizeof(arr[0]) + 1; 

    cout << "Missing number is: " << missingNumber(arr, n) << endl;

    return 0;
}

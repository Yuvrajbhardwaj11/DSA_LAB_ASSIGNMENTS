#include <iostream>
using namespace std;

int missingNumber(int arr[], int n) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        
        if (arr[mid] > mid) {
            high = mid - 1;
        } else {
            
            low = mid + 1;
        }
    }

    
    return low;
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 6, 7};  
    int n = sizeof(arr) / sizeof(arr[0]);

    int missing = missingNumber(arr, n);
    cout << "Missing number is: " << missing << endl;

    return 0;
}

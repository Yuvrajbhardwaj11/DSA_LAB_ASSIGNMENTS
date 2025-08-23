#include <iostream>
#include <vector>
using namespace std;

void duplicateZeros(vector<int>& arr) {
    int n = arr.size();
    int zeros = 0;

    // Count zeros to know the shift
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) zeros++;
    }

    for(int i = n - 1; i >= 0; i--) {
        if(i + zeros < n) arr[i + zeros] = arr[i];
        if(arr[i] == 0) {
            zeros--;
            if(i + zeros < n) arr[i + zeros] = 0;
        }
    }
}

int main() {
    vector<int> arr = {1,0,2,3,0,4,5,0};
    duplicateZeros(arr);

    for(int x : arr) cout << x << " ";
    return 0;
}

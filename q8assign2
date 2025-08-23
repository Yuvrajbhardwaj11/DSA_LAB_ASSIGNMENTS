#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:\n";
    for(int i=0; i<n; i++) cin >> arr[i];

    int count = 0;
    for(int i=0; i<n; i++) {
        bool unique = true;
        for(int j=0; j<i; j++) {
            if(arr[i] == arr[j]) {
                unique = false;
                break;
            }
        }
        if(unique) count++;
    }

    cout << "Total distinct elements: " << count << endl;
}

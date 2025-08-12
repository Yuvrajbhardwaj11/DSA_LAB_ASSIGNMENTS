#include <iostream>
using namespace std;

void optimizedBubbleSort(int arr[], int n) {
    int flag;
    for (int i = 0; i < n - 1; i++) {
        flag=1;
        
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=0;
            }
        }
       
        if (flag=1)
            break;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    optimizedBubbleSort(arr, n);

    
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

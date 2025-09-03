#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool isStackSortable(vector<int> A) {
    stack<int> S;
    int n = A.size();
    int expected = 1; 
    for(int i = 0; i < n; i++) {
        S.push(A[i]);
        while(!S.empty() && S.top() == expected) {
            S.pop();
            expected++;
        }
    }
    return S.empty();
}

int main() {
    int N;
    cout << "Enter size of array A: ";
    cin >> N;
    vector<int> A(N);
    cout << "Enter elements of A: ";
    for(int i = 0; i < N; i++) cin >> A[i];

    if(isStackSortable(A)) 
        cout << "Yes, array B can be sorted using stack.\n";
    else
        cout << "No, it's not possible.\n";

    return 0;
}

#include <iostream>
#include <vector>
#include <stack>
using namespace std;


vector<int> nextGreaterElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> nge(n, 1);  
    stack<int> s;

    for(int i = n-1; i >= 0; i--) {
        while(!s.empty() && s.top() <= arr[i]) s.pop();
        if(!s.empty()) nge[i] = s.top();
        s.push(arr[i]);
    }

    return nge;
}


vector<int> prevSmallerElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> pse(n, -1); 
    stack<int> s;

    for(int i = 0; i < n; i++) {
        while(!s.empty() && s.top() >= arr[i]) s.pop();
        if(!s.empty()) pse[i] = s.top();
        s.push(arr[i]);
    }

    return pse;
}

int main() {
    vector<int> arr = {4, 7, 11, 20, 5, 9};
    
    vector<int> nge = nextGreaterElement(arr);
    vector<int> pse = prevSmallerElement(arr);

    cout << "Next Greater Elements: ";
    for(int x : nge) cout << x << " ";
    cout << "\n";

    cout << "Previous Smaller Elements: ";
    for(int x : pse) cout << x << " ";
    cout << "\n";

    return 0;
}

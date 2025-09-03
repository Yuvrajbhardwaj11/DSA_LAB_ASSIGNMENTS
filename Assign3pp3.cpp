
getMin () in O(1) time and O(1) extra space.
#include <iostream>
#include <stack>
using namespace std;


int getMin(stack<int> s) { 
    if(s.empty()) return -1;  
    int minEle = s.top();
    s.pop();
    while(!s.empty()) {
        if(s.top() < minEle) minEle = s.top();
        s.pop();
    }
    return minEle;
}

int main() {
    stack<int> stackArr;
    stackArr.push(3);
    stackArr.push(5);
    stackArr.push(2);
    stackArr.push(1);
    stackArr.push(4);

    cout << "Minimum element: " << getMin(stackArr) << "\n"; // Output: 1
    return 0;
}

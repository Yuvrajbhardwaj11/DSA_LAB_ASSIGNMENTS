#include <iostream>
#include <queue>
using namespace std;

class StackTwoQueues {
    queue<int> q1, q2;
public:
    void push(int x) {
        q2.push(x);
        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }
    void pop() {
        if(q1.empty()) return;
        q1.pop();
    }
    int top() {
        if(q1.empty()) return -1;
        return q1.front();
    }
    bool isEmpty() {
        return q1.empty();
    }
    void display() {
        queue<int> temp = q1;
        while(!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << "\n";
    }
};

int main() {
    StackTwoQueues s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();       // Output: 30 20 10
    cout << s.top() << "\n"; // Output: 30
    s.pop();
    s.display();       // Output: 20 10
    return 0;
}

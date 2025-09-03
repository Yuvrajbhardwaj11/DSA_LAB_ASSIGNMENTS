#include <iostream>
#include <queue>
using namespace std;

class StackOneQueue {
    queue<int> q;
public:
    void push(int x) {
        q.push(x);
        int sz = q.size();
        while(sz > 1) {
            q.push(q.front());
            q.pop();
            sz--;
        }
    }
    void pop() {
        if(q.empty()) return;
        q.pop();
    }
    int top() {
        if(q.empty()) return -1;
        return q.front();
    }
    bool isEmpty() {
        return q.empty();
    }
    void display() {
        queue<int> temp = q;
        while(!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << "\n";
    }
};

int main() {
    StackOneQueue s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();    
    cout << s.top() << "\n"; 
    s.pop();
    s.display(); 
    return 0;
}

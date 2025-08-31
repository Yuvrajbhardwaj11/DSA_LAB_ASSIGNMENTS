#include <iostream>
using namespace std;

#define MAX 100

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == MAX - 1) {
            cout << "Overflow" << endl;
        } else {
            arr[++top] = x;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Underflow" << endl;
        } else {
            top--;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    void display() {
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void peek() {
        if (top == -1) {
            cout << "Empty" << endl;
        } else {
            cout << arr[top] << endl;
        }
    }
};
int main() {
    Stack s;
    int ch, x;

    while (true) {
        cout << "1.Push 2.Pop 3.isEmpty 4.isFull 5.Display 6.Peek 7.Exit" << endl;
        cin >> ch;

        if (ch == 1) {
            cin >> x;
            s.push(x);
        } else if (ch == 2) {
            s.pop();
        } else if (ch == 3) {
            cout << s.isEmpty() << endl;
        } else if (ch == 4) {
            cout << s.isFull() << endl;
        } else if (ch == 5) {
            s.display();
        } else if (ch == 6) {
            s.peek();
        } else {
            break;
        }
    }
}

#include <iostream>
using namespace std;

class LinearQueue {
    int front, rear, size;
    int* arr;
public:
    LinearQueue(int n) {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    bool isEmpty() {
        return front == -1;
    }
    bool isFull() {
        return rear == size - 1;
    }
    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is Full\n";
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear++;
        arr[rear] = x;
        cout << x << " enqueued\n";
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        cout << arr[front] << " dequeued\n";
        if (front == rear) {
            front = rear = -1;
        } else {
            front = front + 1;  // No modulo in linear queue
        }
    }
    void peek() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
        } else {
            cout << "Front element is " << arr[front] << "\n";
        }
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    int n;
    cout << "Enter size of Linear Queue: ";
    cin >> n;
    LinearQueue q(n);
    while (true) {
        cout << "\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.IsEmpty\n6.IsFull\n7.Exit\n";
        int ch;
        cin >> ch;
        if (ch == 1) {
            int x;
            cout << "Enter element: ";
            cin >> x;
            q.enqueue(x);
        } else if (ch == 2) {
            q.dequeue();
        } else if (ch == 3) {
            q.peek();
        } else if (ch == 4) {
            q.display();
        } else if (ch == 5) {
            cout << (q.isEmpty() ? "Empty\n" : "Not Empty\n");
        } else if (ch == 6) {
            cout << (q.isFull() ? "Full\n" : "Not Full\n");
        } else if (ch == 7) {
            break;
        } else {
            cout << "Invalid Choice\n";
        }
    }
    return 0;
}

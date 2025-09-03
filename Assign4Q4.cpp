#include <iostream>
#include <queue>
using namespace std;

void firstNonRepeating(string s) {
    int freq[256] = {0};  
    queue<char> q;

    for (char ch : s) {
        freq[(int)ch]++;
        q.push(ch);

        while (!q.empty() && freq[(int)q.front()] > 1) {
            q.pop();
        }

        if (q.empty()) {
            cout << -1 << " ";
        } else {
            cout << q.front() << " ";
        }
    }
    cout << "\n";
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    firstNonRepeating(s);
    return 0;
}

#include <iostream>
#include <stack>
using namespace std;

bool balanced(string s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (st.empty()) {
                return false;
            }

            char t = st.top();
            st.pop();

            if ((c == ')' && t != '(') ||
                (c == '}' && t != '{') ||
                (c == ']' && t != '[')) {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    string s;
    cin >> s;

    if (balanced(s)) {
        cout << "Balanced";
    } else {
        cout << "Not Balanced";
    }
}

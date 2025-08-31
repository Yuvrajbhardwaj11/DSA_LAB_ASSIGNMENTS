#include <iostream>
#include <stack>
using namespace std;

int eval(string s) {
    stack<int> st;

    for (char c : s) {
        if (isdigit(c)) {
            st.push(c - '0');
        } else {
            int v2 = st.top();
            st.pop();
            int v1 = st.top();
            st.pop();

            if (c == '+') st.push(v1 + v2);
            else if (c == '-') st.push(v1 - v2);
            else if (c == '*') st.push(v1 * v2);
            else if (c == '/') st.push(v1 / v2);
        }
    }

    return st.top();
}

int main() {
    string s;
    cin >> s;

    cout << eval(s);
}

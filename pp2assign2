#include <iostream>
#include <string>
using namespace std;

bool canSplitOptimal(const string &s) {
    int n = s.size();
    for(int len = 1; len <= n-2; len++) {          // length of middle part
        for(int midStart = 1; midStart <= n-len-1; midStart++) {
            string X = s.substr(midStart, len);
            string prefix = s.substr(0, midStart);
            string suffix = s.substr(midStart+len);

            if(prefix.find(X) != string::npos && suffix.find(X) != string::npos) {
                cout << "Middle substring X='" << X << "' appears in prefix='" 
                     << prefix << "' and suffix='" << suffix << "'\n";
                return true;
            }
        }
    }
    return false;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    if(canSplitOptimal(s))
        cout << "Yes, split possible.\n";
    else
        cout << "No, split not possible.\n";

    return 0;
}

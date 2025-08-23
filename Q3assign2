#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool areAnagrams(string str1, string str2) {
    if(str1.size() != str2.size()) return false;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    if(areAnagrams(str1, str2))
        cout << "Yes, they are anagrams.\n";
    else
        cout << "No, they are not anagrams.\n";
}

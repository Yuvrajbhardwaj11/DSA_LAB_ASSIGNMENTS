#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    string c = a + b; // concatenate
    cout << c << endl;

    string d;
    cin >> d;
    int n = d.length();
    for(int i=0; i<n/2; i++) { // reverse
        char t = d[i];
        d[i] = d[n-1-i];
        d[n-1-i] = t;
    }
    cout << d << endl;

    string e;
    cin >> e;
    string f = "";
    for(int i=0; i<e.length(); i++) { // remove vowels
        char ch = e[i];
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' &&
           ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U')
            f += ch;
    }
    cout << f << endl;

    int m;
    cin >> m;
    string arr[50];
    for(int i=0; i<m; i++) cin >> arr[i];
    for(int i=0; i<m-1; i++) // sort
        for(int j=i+1; j<m; j++)
            if(arr[i] > arr[j]) {
                string t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
    for(int i=0; i<m; i++) cout << arr[i] << " ";
    cout << endl;

    char g;
    cin >> g;
    if(g>='A' && g<='Z') g = g + 32; // uppercase to lowercase
    cout << g << endl;
}

    char c;
    cin >> c;
    if(c>='A' && c<='Z') c = c + 32;
    cout << c << endl;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    cin >> a;
    int b = a.length();
    if (b == 1) cout << "Yes";
    for (int i = 0; i < b/2; ++i) {
        if (a[i] != a[b-i-1]) {
            cout << "No";
            break;
        }
        else {
            cout << "Yes";
            break;
        }
    }
}

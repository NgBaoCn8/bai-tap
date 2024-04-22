#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    vector<int> b(a);
    for (int i = 0; i < a; ++i) {
        cin >> b[i];
    }
    int c, d;
    cin >> c;
    for (int i = 0; i < c; ++i) {
        cin >> d;
        int e = 0;
        vector<int>::iterator low;
        low = lower_bound(b.begin(), b.end(), d);
        if (low != b.end() && *low == d) {
            e++;
        }
        if (e == 0) cout << "No " << (low - b.begin()) + 1 << endl;
        else cout << "Yes " << (low - b.begin()) + 1 << endl;
    }
    return 0;
}

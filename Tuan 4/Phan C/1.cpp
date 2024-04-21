#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<bool> seen(N + 1, false);
    bool found_duplicate = false;
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        if (seen[num]) {
            found_duplicate = true;
            break;
    }
    }
    if (found_duplicate) cout << "Yes";
    else cout << "No";
    return 0;
}

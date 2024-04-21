#include <bits/stdc++.h>
using namespace std;
bool kiemtra(int so) {
    int dao = 0;
    int goc = so;
    while (so > 0) {
        int du = so % 10;
        dao = dao * 10 + du;
        so = so / 10;
    }
    return dao == goc;
}
int dem(int A, int B) {
    int c = 0;
    for (int i = A; i <=B; ++i) {
        if (kiemtra(i)) c++;
    }
    return c;
}
int main() {
    int T, A, B;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> A >> B;
        cout << dem(A, B) << endl;
    }
    return 0;
}

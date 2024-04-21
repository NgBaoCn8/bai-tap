#include <bits/stdc++.h>
using namespace std;
struct Rect {
    int x;
    int y;
    int w;
    int h;
    int a;
    int b;

    bool contains(const Rect& point) const {
        return a >= x && a <= x + w && b >= y && b <= y + h;
    }
};
int main() {
    Rect r;
    cin >> r.x >> r.y >> r.w >> r.h >> r.a >> r.b;
    cout << boolalpha << r.contains(r);
}

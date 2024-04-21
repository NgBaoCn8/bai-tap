#include <bits/stdc++.h>
using namespace std;
struct Rect {
    int x, y, w, h;
};
struct Ship {
    Rect r;
    int dx, dy;
    string id;

    move(Ship& s) {
        s.r.x += s.dx;
        s.r.y += s.dy;
    }
};
display(const Ship& s) {
    cout << s.id << endl << s.r.x << " " << s.r.y;
}
int main() {
    Ship s;
    cin >> s.id >> s.r.x >> s.r.y >> s.dx >> s.dy;
    s.move(s);
    display(s);
    return 0;
}

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
    cout << s.id << endl << s.r.x << " " << s.r.y << endl;
}
int main() {
    Ship ship1, ship2;
    int loop = 9;
    cin >> ship1.id >> ship1.r.x >> ship1.r.y >> ship1.dx >> ship1.dy;
    cin >> ship2.id >> ship2.r.x >> ship2.r.y >> ship2.dx >> ship2.dy;
    while (loop < 10 && loop > 0) {
    ship1.move(ship1); ship2.move(ship2);
    display(ship1); display(ship2);
    loop --;
}
    return 0;
}

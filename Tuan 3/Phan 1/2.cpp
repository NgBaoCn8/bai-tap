#include <bits/stdc++.h>
using namespace std;
struct Point {
    int x;
    int y;
};
void changeByValue(Point p) {
    p.x = 100;
    p.y = 100;
}
void changeByReference(Point& p) {
    p.x = 100;
    p.y = 100;
}
int main() {
    Point p = {10, 20};
    int a;
    cin >> a;
    if(a == 1) {
        changeByValue(p);
        cout << p.x << " " << p.y;
    }
    else {
        changeByReference(p);
        cout << p.x << " " << p.y;
    }
    return 0;
}

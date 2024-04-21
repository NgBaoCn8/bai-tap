#include <bits/stdc++.h>
using namespace std;
struct Point {
    double x;
    double y;
};
Point mid_point(const Point& p1, Point& p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2.0;
    mid.y = (p1.y + p2.y) / 2.0;
    return mid;
}
int main() {
    Point p1, p2;
    cin >> p1.x >> p1.y >> p2.x >> p2.y;
    Point mid = mid_point(p1, p2);
    cout << mid.x << " " << mid.y;
    return 0;
}

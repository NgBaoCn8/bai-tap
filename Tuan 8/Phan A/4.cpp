#include <bits/stdc++.h>
int* create() {
    int a = 10;
    int* ptr = &a;
    return ptr;
}
int main() {
    int* ptr2 = create();
    delete ptr2; // Lỗi: ptr2 không phải là con trỏ được cấp phát động bằng toán tử new
    return 0;
}

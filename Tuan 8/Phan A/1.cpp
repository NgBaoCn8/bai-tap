#include <bits/stdc++.h>
using namespace std;
char* concat(const char* str1, const char* str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    size_t totalLen = len1 + len2;
    char* result = new char[totalLen + 1];
    strcpy(result, str1);
    strcat(result, str2);
    return result;
}
int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";
    char* concatenatedString = concat(str1, str2);
    cout << concatenatedString << endl;
    delete[] concatenatedString;
    return 0;
}

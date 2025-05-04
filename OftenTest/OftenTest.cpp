#include<iostream>
#include <string>
using namespace std;
int m, n, b[10], temp;
int a[30];
int main() {
    cin >> m >> n;
    temp = 0;
    for (int i = m; i <= n;i++) {
        a[temp] = i;
        temp++;
    }
    for (int i = 0; i <= temp - 1;i++) {
        std::string s_num = std::to_string(a[i]);
        for (int c : s_num) {
            b[c - 48]++;
        }
    }
    for (int i = 0; i <= 9;i++) {
        cout << b[i] << ' ';
    }
}
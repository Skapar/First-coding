#include <bits/stdc++.h>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    int cnt = 1;

    while(x < y) {
        x += x / 10;
        cnt++;
    }

    cout << cnt << '\n';
}

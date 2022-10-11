#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    for(int i = 0; n > 0; i++) {
        cnt++;
        if(i % 7 == 0) {
            continue;
        }
        if(i % 2 == 0) {
            n -= 4;
        } else {
            n += 3;
        }
    }

    cout << cnt << '\n';

}

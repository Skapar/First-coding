#include <bits/stdc++.h>

using namespace std;

int main() {
    int mid, end, fin;
    cin >> mid >> end >> fin;
    if((fin > 20) && (mid + end >= 30) && (fin + mid + end >= 70)) {
        cout << "YES!\n";
    } else {
        cout << "NO.\n";
    }
}

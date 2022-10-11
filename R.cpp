#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;
    int sum = 0, prod = 1;
    for(int i = 0; i < n.size(); i++) {
        sum += n[i] - '0';
        prod *= n[i] - '0';
    }

    cout << sum + prod << '\n';
}

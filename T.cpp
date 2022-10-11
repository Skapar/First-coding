#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int sum = 0;
        string s;
        cin >> s;

        for(int i = 0; i < s.size(); i++) {
            sum += s[i];
        }
        if(sum % 2 == 0) {
            cout << "Sum of digits is even!\n";
        } else {
            cout << "Sum of digits is odd!\n";
        }
    }
}

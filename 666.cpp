#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b,c,d,t;
    cin >> t;

    while(t--) {
	if(t>1900){
		cout << a << endl;}
		else if( t>=1600 && t<=1899){
			cout << b << endl;}
			else if( t>=1400 && t<=1599){
			cout << c << endl;}
			else if( t>=1399){
			cout << d << endl;}
		}
    return 0;
}

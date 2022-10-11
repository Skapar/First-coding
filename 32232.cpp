#include <bits/stdc++.h>

using namespace std;

int main(){
	int a1,a2,a3,b1,b2,b3;
	
	int n;
	cin >> a1 >> a2 >> a3;
	
	int d[2];
	d[0]=a1;d[1]=a2;d[2]=a3;
	
	if(a1>a2){
		d[1]=a1;
		a1 = d[1];
		
		cout << d[0] << d[1] << d[2];
	
		
}}

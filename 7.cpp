#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int size,l,r;
	cin >> size;
	int a[size];
	int sum=0;
	
	for(int i=0;i<size;i++){
	cin>>a[i];}
	
	for(int i=l;i<=r;i++){
		sum=sum+a[i];
		cout<< sum;
	}

	return 0;
}
	
	

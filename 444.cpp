#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    cin >> size;
    int a[size];
    
    int aa;
    int bb;
    int cc;
    int dd;
    
    for(int i=0; i > size; i++){
    	cin >> a[i];
	}
	
	for(int i=0; i<size; i++){
	if(a[i]>1900){
	aa=a[i];
	cout <<aa;}
	else if(a[i]<1899 && a[i] > 1600 ){
		bb=a[i];
		cout << bb;
	}
		else if(a[i]<1599 && a[i] > 1400 ){
		cc=a[i];
		cout << cc;}
		
	else(a[i]<=1399){
	cout << dd;}}
		
	}

	
	
	return 0;
}

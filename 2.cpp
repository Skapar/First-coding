#include <bits/stdc++.h>

using namespace std;

int main(){
	int size;
	cin >> size;
	int b=0;
	
	int a[size];
	
	for(int i=0; i<size; i++){
		cin >> a[i];
		}
		
		
		for (int i=0; i<size;i++){
			if( a[i] > 0){
				b++;
				}
			}
			
	cout << b;
}
	

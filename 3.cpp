#include <bits/stdc++.h>

using namespace std;

int main(){
	int size;
	cin >> size;	
	int a[size];
	
	for(int i=0; i<size; i++){
		cin >> a[i];
		}
		
		int tea=a[0];
		
		for (int i=0; i<size;i++){
			if( a[i] > tea){
				tea=a[i];
				}
			}
			
	cout << tea;
}
	

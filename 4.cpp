#include <bits/stdc++.h>

using namespace std;

int main(){
	int size;
	cin >> size;	
	int a[size];
	
	for(int i=0; i<size; i++){
		cin >> a[i];
		}
		
		int tea=a[0] , tea_pos=1;
		
		for (int i=0; i<size;i++){
			if( a[i] > tea){
				tea=a[i];
				tea_pos=i+1;
				}
			}
			
	cout << tea_pos;
}
	

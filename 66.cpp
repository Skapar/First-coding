#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int size;
	cin >> size;
	int a[size];
	
	for(int i=0;i<size;i++){
	cin>>a[i];}
	
	int max=a[0];
	for(int i = 1; i < size; i++){
		if(max < a[i]){
			max=a[i];}
}
	
	int min=a[0];
	for(int i = 0; i < size; i++){
		if(min > a[i]){
			min=a[i];}
}
	for(int i = 0; i < size; i++){
		if(max == a[i]){
			a[i] = min;}
			cout << a[i] << " ";
}
return 0;
	
}

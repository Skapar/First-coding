#include <bits/stdc++.h>

using namespace std;

int main(){
	int a;
	
	cin >>a; 
	if(a==0){
		cout << "Error";
	}
	else if(a>=12 && a<=2){
		cout << "Winter";
	}
	else if(a>=3 && a<=5){
		cout << "Spring";
	}
	else if(a>=6 && a<=8){
		cout << "Summer";
	}
	else if(a>=9 && a<=11){
		cout << "Autumn";
	}
	else {
		cout << "Error";
	}
	
	
}

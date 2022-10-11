#include <bits/stdc++.h>

using namespace std;

int main(){
	int a;
	
	cin >> a;
	
	if(a<13 && a>0){
		cout << "Winter";
	}
	else if(a>2 && a<6){
		cout << "Spring";
	}
	else if(a>5 && a<9){
		cout << "Summer";
	}
	else if(a>8 && a<12){
		cout << "Autumn";
	}
	else {
		cout << "Error";
	}
}

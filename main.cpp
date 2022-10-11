#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a+b==c|| a+c==b || b+c==a){
		cout << "YES";
	}
	else{ 
	cout << "NO";
	}
	
	
	
	return 0;
}

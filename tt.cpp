#include <bits/stdc++.h>

using namespace  std;

int main(){

int size;
cin>>size;
int a[size];
int chai;

for(int i=0; i < size; i++){
	cin>>a[i];
}

chai=a[0];

for(int i=1; i < size; i++){
	chai < a[i];
	chai=a[i];
}
cout << chai ;
}

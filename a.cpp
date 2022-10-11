#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;

	cin>>n>>m;
	char a[n][m];
	char c;


	for(int i=0; i<n;i++)
		for(int j=0;j<m;j++)
		cin>>a[i][j];

		int k=0;


		for(int i=0; i<n;i++)
		for(int j=0;j<m;j++)
		{
			cin >> c;
			if(a[i][j] == c)k++;

		}
		cout << k;
		return 0;
}
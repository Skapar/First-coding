#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,s,t ;
    int i,j=0;
    cin >> a >> b >> s >> t;
    if(a%2==0){
        i+=1;
    }   else{
        j+=1;
    } if(b%2==0){
        i+=1;
    }   else{
        j+=1;
    } if(s%2==0){
        i+=1;
    }   else{
        j+=1;
    } if(t%2==0){
        i+=1;
    }   else{
        j+=1;
    }

        cout << i << " " << j;

        return 0;
    
}

#include<bits/stdc++.h>

using namespace std;

long long F[93];
long long k;
int n;

char check(int n,long long k){
    if(n==1 && k==1) return 'A';
    if(n==2 && k==1) return 'B';
    else if(k>F[n-2]) return check(n-1,k-F[n-2]);
    return check(n-2,k);
}
int main(){
    int t; cin >> t;
    F[1]=F[2]=1;
    for(int i=3;i<=92;i++){
        F[i]=F[i-1]+F[i-2];
    }
    while(t--){
        cin >> n >> k;
        cout << check(n,k) << endl;
    }
}
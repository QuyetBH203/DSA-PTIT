#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;

void solve(){
    int n; cin >> n;
    int a[n];
    for(auto &x: a) cin >> x;
    sort(a,a+n);
    long long s=0;
    for(int i=0;i<n;i++){
        s+=(i*a[i])%mod;

    }
    cout << s%mod << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
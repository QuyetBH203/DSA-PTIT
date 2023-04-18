// tinh P(n,k)

#include<bits/stdc++.h>
const int mod=1e9+7;

using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    if(k>n){
        cout << 0 << endl;
        return;
    }
    long long res=1;
    for(int i=n-k+1;i<=n;i++){
        res=(res*i)%mod;
    }
    cout << res << endl;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        solve();
        
    }
    
}
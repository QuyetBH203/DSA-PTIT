#include<bits/stdc++.h>

using namespace std;
const int mod=1e9+7;
void solve(){
    int n, s;
    cin >> n >> s;
    int a[n],b[1005];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    memset(b,0,sizeof(b));
    b[0]=1;
    for(int i=1;i<=s;i++){
        for(int j=0;j<n;j++){
            if(i>=a[j]){
                b[i]=(b[i]+b[i-a[j]])%mod;
            }
        }
    }
    cout << b[s] << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }

    
}
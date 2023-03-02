#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n,k;
    cin >> n >> k;
    ll arr[n];
    for(auto &x: arr) cin >> x;
    sort(arr,arr+n);
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=lower_bound(arr+i+1,arr+n,arr[i]+k)-(arr+i+1);
    }
    cout << ans << endl;
    
}


int main(){
   int t;
   cin >> t;
   while(t--){
    solve();
   }
}
#include<bits/stdc++.h>
#define ll long long 
using namespace std;


void solve(){
    ll n,k;
    cin >> n >> k;
    ll arr[n];
    for(auto &x: arr) cin >> x;
    sort(arr,arr+n);
    ll cnt=0;
    for(ll i=0;i<n-2;i++){
        for(ll j=i+1;j<n-1;j++){
            ll d=k-arr[i]-arr[j];
            
            ll b=lower_bound(arr+j+1,arr+n,k-arr[i]-arr[j])-arr;
            cnt+=(b-j-1);

        }
    }
    cout << cnt << endl;

}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();

        /* code */
    }
    
}
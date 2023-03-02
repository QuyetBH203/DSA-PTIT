#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,x;
    cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int ans=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<=x){
            ans=i;
        }
    }
    if( ans !=-1){
        cout << ans+1 << endl;
    }else{
        cout << -1 << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
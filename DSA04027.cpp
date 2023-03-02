#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    int a[n],b[n-1];
    for(auto &x: a) cin >> x;
    for(auto &y: b) cin >> y;
    for(int i=0;i<n;i++){
        if(a[i] !=b[i]){
            cout << i+1 << endl;
            break;
        }
    }
 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();

    }
}
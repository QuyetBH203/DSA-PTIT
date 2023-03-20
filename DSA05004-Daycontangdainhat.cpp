// L[i]=max(L[i],L[j]+1)
// j thuoc[0,i-1], ai > aj
#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    int a[n];
    for(auto &x : a){
        cin >> x;
    }
    vector<int> L(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                L[i]=max(L[i],L[j]+1);
            }
        }
    }
    cout << *max_element(L.begin(),L.end());
}

int main(){
    int t; t=1;
    while(t--){
        solve();
    }
}
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,max=0; cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        b[i]=a[i];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j] && b[i]<b[j]+a[i] ){
                b[i]=b[j]+a[i];
            }
        }
    }
    for(int i=0;i<n;i++){
        if(max<b[i]){
            max=b[i];
        }
    }
    cout << max << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();

    }
}
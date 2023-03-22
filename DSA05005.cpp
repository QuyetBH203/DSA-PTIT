#include<bits/stdc++.h>

using namespace std;
void solve(){
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int> L(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            // vi sap xep theo thu tu nen day ca dau =
            if(a[i]>=a[j]){
                L[i]=max(L[i],L[j]+1);
            }
        }
    }
    cout << n-*max_element(L.begin(),L.end()) << endl;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        solve();
        /* code */
    }
    

}
#include<bits/stdc++.h>

using namespace std;
void solve(){
    int n; cin >> n;
    int arr[n];
    for(auto &x: arr) cin >> x;
    sort(arr,arr+n);
    cout << lower_bound(arr,arr+n,1)-arr << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;

}
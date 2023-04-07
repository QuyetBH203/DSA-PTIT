#include<bits/stdc++.h>

using namespace std;
int a[10005];
void solve(){
    int n; cin >> n;
    memset(a,0,sizeof(a));
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    stack<int> st; // tao stack de luu cac gia tri la chi so cua
                   // cac ptu trong mang
    for(int i=1;i<=n;i++){
        while(!st.empty() && a[st.top()]<=a[i]){
            st.pop();
        }
        if(st.empty()) cout << i << " ";
        else cout << i-st.top() << " ";
        st.push(i);
    }
    cout << endl;

}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
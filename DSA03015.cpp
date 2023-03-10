#include<bits/stdc++.h>
#define ll long long

using namespace std;
void solve(){
   int n,s,m;
   cin >> n >> s >> m;
   if(n<m || 6*(n-m)<m){
    cout << -1 ;
   }else{
    cout << ceil((float)m*s/n);
   }


}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;

    }
}
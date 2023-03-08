#include<bits/stdc++.h>

using namespace std;

bool cmp(int a,int b){
    return a > b;
}
void solve(){
   int n; cin >> n;
   int a[n];
   for(int i=0;i<n;i++) cin >> a[i];
   sort(a,a+n,cmp);
   cout << max(a[0]*a[1]*a[2],a[0]*a[n-1]*a[n-2]);
}
int main(){
    solve();

}
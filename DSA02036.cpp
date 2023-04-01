#include<bits/stdc++.h>

using namespace std;
int n,a[100];
vector<int> b;
vector<vector<int>> ans;

void check(){
    int sum=0;
    for(int i: b){
        sum +=i;
    }
    if(sum%2==1){
        ans.push_back(b);
    }
}
void Try(int i){
    for(int j=0;j<=1;j++){
        if(j==1) b.push_back(a[i]);
        if(i==n-1) check();
        else Try(i+1);
        if(j==1) b.pop_back();
    }
}
bool cmp(int a,int b){
    return a>b;
}
void solve(){
    cin >> n;
    b.clear(),ans.clear();
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n,cmp);
    Try(0);
    sort(ans.begin(),ans.end());
    for(auto it: ans){
        for(int j: it){
            cout << j << " ";
        }
        cout << endl;
    }

}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }

}
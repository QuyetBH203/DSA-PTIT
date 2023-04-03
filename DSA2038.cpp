#include<bits/stdc++.h>

using namespace std;
int n,k;
int a[100]={};
int arr[100]={};

vector<vector<int>> ans;
void out(){
    vector<int> b;
    for(int i=1;i<=k;i++){
        b.push_back(a[i]);
    }
    ans.push_back(b);
}
void Try(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k) out();
        else Try(i+1);
    }
}
void solve(){
    cin >> n >> k;
    memset(a,0,sizeof(a));
    ans.clear();
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    Try(1);
    for(auto it: ans){
        for(int j: it){
            cout << arr[j-1] << " ";
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
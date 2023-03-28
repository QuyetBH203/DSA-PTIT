#include<bits/stdc++.h>

using namespace std;
int a[11],n;
vector<vector<int>> res;

void out(int n){
    vector<int> b;
    for(int i=1;i<=n;i++){
        b.push_back(a[i]);
    }
    res.push_back(b);
}
void Try(int i,int sum,int k){
    for(int j=k;j>=1;j--){
        if(sum+j<=n){
            a[i]=j;
            sum +=j;
            if(sum==n) out(i);
            else Try(i+1,sum,j);
            sum -=j;
        }
    }
}
void solve(){
    cin >> n;
    res.clear();
    Try(1,0,n);
    cout << res.size() << endl;
    for(int i=0;i<res.size();i++){
        cout << "(";
        for(int j=0;j<res[i].size()-1;j++){
            cout << res[i][j] << " ";
        }
        cout << res[i][res[i].size()-1] << ") ";
    }
    cout << endl;
}  
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }

}
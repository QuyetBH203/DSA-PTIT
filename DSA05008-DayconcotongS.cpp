// dp[i][j]= (false or true) co ton tai day con co tong =j khi xet den so thu i hay khong

#include<bits/stdc++.h>

using namespace std;
const int maxn=100001;



void solve(){
    int n,s;
    cin >> n >> s;
    bool dp[n+1][s+1];
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin >>a[i];
    }
    for(int i=0;i<=n;i++){
        dp[i][0]=true;
    }
    for(int i=1;i<=s;i++){
        dp[0][i]=false;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            if(j<a[i-1]){
                dp[i][j]=dp[i-1][j];
            }
            if(j >= a[i-1]){
                dp[i][j]=dp[i-1][j] || dp[i-1][j-a[i]];
            }
        }
    }
    if(dp[n][s]){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }


}

int main(){
    int t; cin >> t;
    while(t--){
        solve();

    }
}
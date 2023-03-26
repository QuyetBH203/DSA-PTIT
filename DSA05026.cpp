#include<bits/stdc++.h>

using namespace std;
int C,n;
int a[105];
int dp[105][25005]={};
void solve(){
    int C,n;
    cin >> C >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=C;i++){
        dp[0][C]=0; // con bo thu 0 co cac khoi luong =0
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=C;j++){
            dp[i][j]=dp[i-1][j];
            if(a[i]<=j){
                dp[i][j]=max(dp[i][j],dp[i-1][j-a[i]]+a[i]);
            }
        }
    }
    cout << dp[n][C];
}
int main(){
    solve();
}
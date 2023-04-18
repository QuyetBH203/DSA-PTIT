// So thuan nghich
// Tuong tu bai xau con doi xung dai nhat
#include<bits/stdc++.h>


using namespace std;

void solve(){
    string s; cin >> s;
    int n=s.length();
    s="x"+s;
    int dp[n+1][n+1];
    memset(dp,false,sizeof(dp));
    // tat ca cac xau con co do dai =1 deu la xau doi xung
    for(int i=1;i<=n;i++) dp[i][i]=true;
    // CT QHD: dp[i][j]=(dp[i+1][j-1]) &&(s[i]==s[j])
    // xet tat ca cac xau con co do dai 2 tro len
    int ans=1; // luon co xau con doi xung co do dai la 1
    for(int len=2;len<=n;len++){
        // xau con bat dau tu i va ket thuc tai j
        for(int i=1;i<=n-len+1;i++){
            int j=i+len-1;
            if(len==2 && s[i]==s[j]) dp[i][j]=true;
            else{
                dp[i][j]=(dp[i+1][j-1]) && (s[i]==s[j]);
            }
            if(dp[i][j]){
                ans=max(ans,len);
            }
        }
    }
    cout << ans << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
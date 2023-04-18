// Xau con doi xung dai nhat
#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s; cin >> s;
    int n=s.length();
    s="x"+s;
    bool dp[n+1][n+1]; // bang phuong an
    memset(dp,false,sizeof(dp));
    // CT QHD: dp[i][j]=1 khi dp[i+1][j-1] && s[i]==s[j]
    // xet xau bat dau tu chi so i va ket thuc o chi so j
    // cho tat cac cac xau co do dai la 1 la doi xung
    for(int i=1;i<=n;i++) dp[i][i]=true;
    // xet tat ca cac xau co do dai la 2 tro di
    int ans=1; // do dai xau doi xung luon la 1
    for(int len=2;len<=n;len++){
        for(int i=1;i<=n-len+1;i++){
            int j=i+len-1;
            if(len==2 && s[i]==s[j]) dp[i][j]=true;
            else{
                dp[i][j]=(dp[i+1][j-1]) &&(s[i]==s[j]);
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
    while (t--)
    {
        solve();   
    }
    
}
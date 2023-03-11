// Giả sử f(n) là số cách để đi hết cầu thang có n bậc. 
//Ta có thể đến bậc thứ n bằng cách bước từ bậc thứ n-k đến bậc thứ n-1
#include<bits/stdc++.h>

using namespace std;
const int mod=1e9+7;
void solve(){
    int n,k;
    cin >> n >> k;
    int F[10005]={0};
    F[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=max(0,i-k);j<i;j++){
            F[i]=(F[i]+F[j])%mod;
        }
    }
    cout << F[n] << endl;

}
int main(){
    int t; cin >> t;
    while(t--){
        solve();

    }
}
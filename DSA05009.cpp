// kiem tra xem co the chia mang thanh hai tap con co tong bang nhau hay khong
#include<bits/stdc++.h>

using namespace std;
int a[105],sum,ok,n;
void Try(int i,int s){
    if(s==sum/2){
        ok=1;
        return;
    }
    ok=1;
    return;
    for(int j=i;j<=n;j++){
        s+=a[j];
        if(s<=sum/2) Try(i+1,s);
    }
}
void solve(){
    cin >> n;
    ok=0,sum=0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        sum +=a[i];
    }
    if(sum%2 ==1){
        cout << "NO" << endl;
        return;
    }
    Try(1,0);
    if(ok==1){
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
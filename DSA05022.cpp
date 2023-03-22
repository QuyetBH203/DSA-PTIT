#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,in,de,cop;
    cin >> n >> in >> de >> cop;
    int F[105]={};
    F[1]=in;
    for(int i=2;i<=n;i++){
        if(i%2==1){
            F[i]=min({F[i-1]+in,F[(i+1)/2]+cop+de,F[(i-1)/2]+cop+in});
        }else{
            F[i]=min(F[i-1]+in,F[i/2]+cop);
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
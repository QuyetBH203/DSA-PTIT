#include<bits/stdc++.h>

using namespace std;

const int a[10]={1,2,5,10,20,50,100,200,500,1000};

void solve(){
    int cnt=0;
    int n; cin >> n;
    for(int i=9;i>=0;i--){
        cnt+=n/a[i];
        n%=a[i];
    }
    cout << cnt << endl;

}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    
}
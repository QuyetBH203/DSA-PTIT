#include<bits/stdc++.h>

using namespace std;
int N,P,S;
vector<int> prime;
vector<int> b;
vector<vector<int>> ans;
bool nt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
void Try(int cur,int count,int sum){
    if(S==sum && count==N){
        ans.push_back(b);
        return;
    }
    if(count > N || sum >S){
        return;
    }
    for(int j=cur;j<prime.size();j++){
       
        b.push_back(prime[j]);
        Try(j+1,count+1,sum+prime[j]);
        b.pop_back();

    }
}
void solve(){
    cin >> N >> P >> S;
    ans.clear(),b.clear(),prime.clear();
    for(int i=P+1;i<=S;i++){
        if(nt(i)){
            prime.push_back(i);
        }
    }
    Try(0,0,0);
    cout << ans.size() << endl;
    for(auto it: ans){
        for(int j: it){
            cout << j << " ";
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
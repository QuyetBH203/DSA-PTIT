#include<bits/stdc++.h>

using namespace std;

void solve(){
    int k; cin >> k;
    string s; cin >> s;
    map<char,int> mp;
    for(char i: s){
        mp[i]++;
    }
    int cnt=INT_MIN;
    for(auto it: mp){
        if(it.second>cnt){
            cnt=it.second;
        }

    }
    if(s.size()>=cnt*k-(k-1)){
        cout << 1;
    }else{
        cout << -1;
    }
    cout << endl;

}
int main(){
    int t; cin >> t;
    while(t--){
        solve();

    }
}
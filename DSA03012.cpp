#include<bits/stdc++.h>

using namespace std;
void solve(){
    string s; cin >> s;
    map<char,int> mp;
    for(char i: s){
        mp[i]++;
    }
    int cnt=INT_MIN;
    int maxn=0;
   for(auto it: mp){
    if(it.second>cnt){
        cnt=it.second;
    }
   }
   if(s.size()-cnt>=cnt-1){
    cout << 1;
   }else{
    cout << -1;
   }
   
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
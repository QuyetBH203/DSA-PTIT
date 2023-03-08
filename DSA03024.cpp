#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}
void solve(){
    int n; cin >> n;
    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++){
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),cmp);
    int cnt=1;
    int time=v[0].second;
    for(int i=1;i<v.size();i++){
        if(v[i].first>=time){
            time=v[i].second;
            cnt++;
        }
    }
    cout << cnt << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
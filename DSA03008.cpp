#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}
void solve(){
    int n; cin >> n;
    int a[n],b[n];
    for(int &x: a) cin >> x;
    for(int &y: b) cin >> y;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back({a[i],b[i]});
    }
    sort(v.begin(),v.end(),cmp);
    int time_start=v[0].second;
    int count=1;
    for(int i=1;i<v.size();i++){
        if(v[i].first>=time_start){
            time_start=v[i].second;
            count++;
        }
    }
    cout << count << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();

    }
}
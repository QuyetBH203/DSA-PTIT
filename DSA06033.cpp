#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    return ((a.second < b.second) &&(a.first>b.first));
}
void solve(){
    int n; cin >> n;
    int arr[n];
    for(auto &x: arr) cin >> x;
    vector<pair<int,int>> vt;
    for(int i=0;i<n;i++){
        pair<int,int> pt={i,arr[i]};
       
        vt.push_back(pt);

    }
    sort(vt.begin(),vt.end(),cmp);
    for(auto it: vt){
        cout << it.first << " ";
    }
    
   
    

}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        
    }
    
}
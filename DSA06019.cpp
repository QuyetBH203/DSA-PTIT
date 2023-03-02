#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a,pair<int,int>b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second>b.second;
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int,int> mp;
        for(auto &x: arr){
            cin >> x;
            mp[x]++;
        }
        vector<pair<int,int>> a(mp.begin(),mp.end());
        sort(a.begin(),a.end(),cmp);
        for(auto it: a){
            for(int i=1;i<=it.second;i++){
                cout << it.first << " ";
            }
        }
        cout << endl;

        /* code */
    }
    
}
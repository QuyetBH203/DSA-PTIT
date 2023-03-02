#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        int arr[n];
        map<int,int> mp;
        for(auto &x: arr){
            cin >> x;
            mp[x]++;
        }
        int cnt=0;
        for(auto it: mp){
            if(it.first==k){
                cout << it.second;
                cnt++;
            }
        }
        
        if(cnt==0){
            cout << -1 << endl;
        }else{
            cout << endl;
        }

        /* code */
    }
    
}
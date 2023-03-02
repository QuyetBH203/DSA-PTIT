#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int arr[n];
        for(auto &x: arr) cin >> x;
        sort(arr,arr+n);

        int ans=INT_MAX;
        for(int i=0;i<n-1;i++){
            ans=min(ans,arr[i+1]-arr[i]);
        }
        cout << ans << endl;

        
        /* code */
    }
    
}
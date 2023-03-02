
#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(auto &x: arr) cin >> x;
    for(int i=0;i<=n-k;i++){
        int max=arr[i];
        for(int j=1;j<k;j++){
            if(arr[i+j]>max){
                max=arr[i+j];
            }

        }
        cout << max << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();

        /* code */
    }
    
}
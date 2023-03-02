#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int ans=0;
        while(k%2==0){
            ans++;
            k/=2;
        }
        char c='A'+ans;
        cout << c << endl;
    }
}
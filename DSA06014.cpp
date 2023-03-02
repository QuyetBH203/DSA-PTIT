#include<bits/stdc++.h>

using namespace std;
const int maxn=(int)1e7;
bool prime[maxn+1];


bool checkOfPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
void solve(){
    int n;
    cin >> n;
    bool check=false;
    for(int i=2;i<n;i++){
        if(checkOfPrime(i) && checkOfPrime(n-i)){
            cout << i << " " << n-i << endl;
            check=true;
            break;
        }
    }
   
    if(check==false) cout << -1 << endl;
}   
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        /* code */
    }
    return 0;
    

}
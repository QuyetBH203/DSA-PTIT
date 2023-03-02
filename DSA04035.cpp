#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mod=1e9+7;

ll check(int n,ll k){
    if(k==0) return 1;
    long long x=check(n,k/2);
    if(k%2==0) return (x*x)%mod;
    return (n*((x*x)%mod))%mod;
 
}
int main(){
   int t=20;
   while(t--){
    int a;
    ll b;
    cin >> a >> b;
    if( a==0 && b==0){
        break;
    }else{
        cout << check(a,b) << endl;
    }
   }

}


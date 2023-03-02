#include<bits/stdc++.h>

using namespace std;

const int mod=123456789;


long long power(long long n,long long k){
    if(k==0) return 1;

    long long x=power(n,k/2);
    if(k%2==0) return (x*x)%mod;

    return (n*((x*x)%mod))%mod;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        cout << power(2,n-1) << endl;
    }

}
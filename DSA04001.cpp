#include<bits/stdc++.h>

using namespace std;

const int mod=1e9+7;

long long power(long long n,long long k){
    if(k==1) return n;
    if(k==0) return 1;
    long long x=power(n,k/2);
    long long y=(x*x)%mod;
    if(k%2==0) return y;
    return (n*y)%mod;
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long n,k;
        cin >> n >> k;
        cout << power(n,k) << endl;
        /* code */
    }
    
}
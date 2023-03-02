#include<bits/stdc++.h>

using namespace std;

const int mod=1e9+7;

long long rev(long long n) {
    long long res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
long long power(long long n, long long k) {
    if (k == 0) return 1;
    long long x = power(n, k / 2);
    if (k % 2 == 0) return (x * x) % mod;
    return (n * ((x * x) % mod)) % mod;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
       long long n; cin >> n;
       long long p=rev(n);
       cout << power(n,p) << endl;

        /* code */
    }
    
}
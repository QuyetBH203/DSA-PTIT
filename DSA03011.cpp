#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    priority_queue<ll, vector<ll>, greater<ll>> pq(a, a + n);
    ll sum = 0;
    while (pq.size() > 1)
    {
        ll x = pq.top();
        pq.pop();
        ll y = pq.top();
        pq.pop();
        ll z = (x + y) % mod;
        sum = (sum + z) % mod;
        pq.push(z);
    }
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
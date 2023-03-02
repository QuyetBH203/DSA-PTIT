#include <bits/stdc++.h>
#define ll long long
using namespace std;

int index_check(ll arr[], ll n)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
    }
    ll cnt = 0;
    for (int i = 1; i < n - 1; i++)
    {
        cnt += arr[i - 1];
        if (cnt == sum - arr[i] - cnt)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (auto &x : arr)
            cin >> x;
        cout << index_check(arr, n) << endl;
    }
}
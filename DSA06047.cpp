#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(ll arr[], int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (binary_search(arr + j + 1, arr + n, arr[i] + arr[j]))
                return true;
        }
    }
    return false;
}
void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] *= arr[i];
    }
    sort(arr, arr + n);
    cout << (check(arr, n) ? "YES" : "NO") << endl;
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
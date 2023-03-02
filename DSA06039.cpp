#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    int arr[n];
    for (int &x : arr)
    {
        cin >> x;
        mp[x]++;
    }
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] > 1)
        {
            cout << arr[i] << endl;
            ans = 1;
            break;
        }
    }
    if (ans == -1)
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        /* code */
    }
}
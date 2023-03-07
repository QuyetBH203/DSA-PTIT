#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    string s = "", str = "";
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            s += to_string(a[i]);
        }
        else
        {
            str += to_string(a[i]);
        }
    }
    cout << stoll(s) + stoll(str) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
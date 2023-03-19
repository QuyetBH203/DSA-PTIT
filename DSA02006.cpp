#include <bits/stdc++.h>
using namespace std;
int a[11], b[11];
int n, s, ok;
void out(int n)
{
    cout << "[";
    for (int i = 1; i < n - 1; i++)
    {
        cout << b[i] << " ";
    }
    cout << b[n - 1] << "]"
         << " ";
}
void Try(int i, int sum, int cur)
{
    if (sum == s)
    {
        ok = 1;
        out(i);
        return;
    }
    else
    {
        for (int j = cur; j <= n; j++)
        {
            sum += a[j];
            b[i] = a[j];
            if (sum <= s)
                Try(i + 1, sum, j + 1);
            sum -= a[j];
        }
    }
}
void solve()
{
    cin >> n >> s;
    ok = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    Try(1, 0, 1);
    if (ok == 0)
        cout << -1;
    cout << endl;
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
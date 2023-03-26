#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> w(n + 1);
    vector<int> v(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> w[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
    }

    vector<vector<int>> f(n + 1, vector<int>(m + 1));
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (j >= w[i])
                f[i][j] = max(f[i - 1][j], f[i - 1][j - w[i]] + v[i]);
            else
                f[i][j] = f[i - 1][j];
        }
    }
    cout << f[n][m] << endl;
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